-- 核酸检测触发器
drop trigger if exists test_trg;
DELIMITER $$
create trigger test_trg after insert
on test_appointment_and_result for each row
begin 
if(select ID from vaccine_appointment_and_result
where ID=NEW.ID and TIMESTAMPDIFF(DAY,time,now())<1)is not null
-- then insert into test_appointment_and_result values (NEW.ID,NEW.time,NEW.type,NEW.laboratory,NEW.result);
then delete from test_appointment_and_result where ID=NEW.ID and time=NEW.time;
end if;
end$$
DELIMITER ;
-- 接种疫苗触发器
drop trigger if exists vaccine_trg;
DELIMITER $$
create trigger vaccine_trg after insert
on vaccine_appointment_and_result for each row
begin 
select time into @temp1 from vaccine_appointment_and_result
where id=NEW.id and type=NEW.type;
select time into @temp2 from vaccine_appointment_and_result
where id=NEW.id and type='1';
select time into @temp3 from vaccine_appointment_and_result
where id=NEW.id and type='2';
IF (@temp1 is null and NEW.type='2'and @temp2 is not null)
or (@temp1 is null and NEW.type='3'and @temp3 is not null )
or( @temp1 is null and NEW.type='1')
THEN delete from vaccine_appointment_and_result where ID=NEW.ID and type=NEW.type;
END IF;
end$$
DELIMITER ;


-- 视图

drop view if exists riskzone_outside_A;
create view  riskzone_outside_A  as
select distinct street_name,area,risk_level,control_type from
regions_outside_a
where risk_level!='low' or control_type!='free'
group by risk_level,control_type;

select * from riskzone_outside_A;

drop view if exists key_regions;
create view key_regions as
select street_name,area,city,province
from regions_outside_a natural join key_area_standard
where
is_key_area='yes';
select* from  key_regions;

drop view if exists key_citizens;
create view key_citizens as
select id as key_id,name,phone_number,citizens.area,citizens.street_name,
phone_ip_location.street_name as route_street,phone_ip_location.area as route_area,phone_ip_location.city,phone_ip_location.province,time
from phone_ip_location join key_regions using(street_name,area,city,province) join citizens using(id)
where TIMESTAMPDIFF(DAY,time,now())<14;
select* from key_citizens;

drop view if exists negitive_72h_citizens;
create view negitive_72h_citizens as
select id,type,time
from test_appointment_and_result
where
result='negative' and TIMESTAMPDIFF(DAY,time,now())<3;
select*from negitive_72h_citizens ;

drop view if exists locked_down_zone_citizens;
create view locked_down_zone_citizens as
select id, name,phone_number,street_number,street_name,area
from citizens natural join control_type_in_a
where control_type='locked_down'
group by street_name,area;
select * from locked_down_zone_citizens;

-- 储存函数
-- 健康码
set global log_bin_trust_function_creators=TRUE;
drop function if exists health_code;
DELIMITER $$
create function health_code (in_id varchar(45))
returns varchar(45)
begin
declare color varchar(45);
declare id_result varchar(45);
declare id_test_time varchar(45);
declare id_control_type varchar(45);
declare id_risk_level varchar(45);
declare temp varchar(45);
set color='green';
-- 核酸检测结果
select result into id_result 
from test_appointment_and_result
where test_appointment_and_result.id=in_id and result is not null;
select time into id_test_time 
from test_appointment_and_result
where test_appointment_and_result.id=in_id and result is not null;
-- 防控类型
select control_type into id_control_type 
from citizens natural join control_type_in_a
where citizens.id=in_id;
-- 风险类型
select risk_level into id_risk_level 
from citizens natural join risk_level_in_area
where citizens.id=in_id;
-- 14d内是否途径排查地区 如果途径,count(*)>0
select count(*) into temp
from key_citizens;
-- 黄码
if id_risk_level='high' or (temp>0 and (id_result is null or TIMESTAMPDIFF(DAY, id_test_time,now())>3))then set color='yellow';
end if;
if id_result='positive' or  id_control_type='locked_down' then set color='red';
end if;
return color;
end$$
DELIMITER ;
select health_code('12341');
select count(*) from key_citizens where key_id='12341';

select count(*) from test_appointment_and_result where result='positive' and TIMESTAMPDIFF(DAY,time,now())=0;