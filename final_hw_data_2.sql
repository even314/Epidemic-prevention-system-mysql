-- 测试数据
use `epidemic_system`;

delete from `phone_ip_location`;
delete from `risk_level_in_area`;
delete from `test_appointment_and_result`;
delete from `test_sites`;
delete from `vaccine_appointment_and_result`;
delete from `citizens`;
delete from `control_type_in_a`;
delete from `key_area_standard`;
delete from `nucleic_acid_tests`;
delete from `regions_outside_a`;
delete from `hospital`;
delete from `vaccine_inoculation`;
delete from `streets_in_a`;


insert into `streets_in_a` values('01','aa','aaa');
insert into `streets_in_a` values('02','aa','aaa');
insert into `streets_in_a` values('03','aa','aaa');
insert into `streets_in_a` values('04','aa','aaa');
insert into `streets_in_a` values('05','aa','aaa');
insert into `streets_in_a` values('01','bb','aaa');
insert into `streets_in_a` values('04','bb','aaa');

insert into `streets_in_a` values('01','aa','bbb');
insert into `streets_in_a` values('04','aa','bbb');
insert into `streets_in_a` values('05','aa','bbb');
insert into `streets_in_a` values('01','cc','bbb');
insert into `streets_in_a` values('04','cc','bbb');

insert into `streets_in_a` values('01','dd','ccc');
insert into `streets_in_a` values('02','dd','ccc');
insert into `streets_in_a` values('04','dd','ccc');
insert into `streets_in_a` values('05','dd','ccc');
insert into `streets_in_a` values('01','aa','ccc');
insert into `streets_in_a` values('04','aa','ccc');
insert into `streets_in_a` values('01','ee','ccc');
insert into `streets_in_a` values('04','ee','ccc');

insert into `streets_in_a` values('01','gg','ddd');
insert into `streets_in_a` values('04','gg','ddd');
insert into `streets_in_a` values('05','gg','ddd');


insert into citizens values('12341','Mark','19911122222','01','aa','aaa');
insert into citizens values('12342','Lily','15544667876','02','aa','aaa');
insert into citizens values('12343','Mark','19911127882','01','cc','bbb');
insert into citizens values('12344','Wendy','1786544436','01','dd','ccc');
insert into citizens values('12345','Alex','14433556222','01','aa','ccc');
insert into citizens values('12346','Lily','10098533653','01','ee','ccc');


insert into `key_area_standard` values('low','free','no'),('low','precaution','no')
,('low','control','yes'),('low','locked_down','yes'),('middle','free','yes'),
('middle','precaution','yes'),('middle','control','yes'),('middle','locked_down','yes'),
('high','free','yes'),('high','precaution','yes'),('high','control','yes'),
('high','locked_down','yes');

insert into `nucleic_acid_tests` values('mix','lab1','$10'),('mix','lab2','$8'),
('single','lab1','$30'),('single','lab3','$35');

insert into `vaccine_inoculation` values('company1','1'),('company1','2'),('company2','2'),
('company2','3');

insert into `regions_outside_a` values('01','astreet','aaera','acity','aprovince','low','free'),
('01','bstreet','baera','acity','aprovince','high','locked_down'),
('01','cstreet','caera','acity','aprovince','middle','locked_down'),
('01','dstreet','daera','gcity','cprovince','low','locked_down');

insert into hospital values('05','aa','aaa','company1','1','aaa_aa_cen_hospital'),
('05','aa','aaa','company1','2','aaa_cen_hospital'),
('05','aa','aaa','company2','3','aaa_cen_hospital'),
('05','aa','bbb','company1','1','bbb_cen_hospital'),
('05','aa','bbb','company1','2','bbb_cen_hospital'),
('05','aa','bbb','company2','3','bbb_cen_hospital'),
('05','dd','ccc','company1','1','ccc_cen_hospital'),
('05','dd','ccc','company2','2','ccc_cen_hospital'),
('05','dd','ccc','company2','3','ccc_cen_hospital'),
('05','gg','ddd','company1','1','ddd_cen_hospital'),
('05','gg','ddd','company2','2','ddd_cen_hospital'),
('05','gg','ddd','company2','3','ddd_cen_hospital');


insert into `control_type_in_a` values('aa','aaa','free'),
('bb','aaa','free'),('aa','bbb','control'),('cc','bbb','locked_down'),
('aa','ccc','precaution'),('dd','ccc','control'),('ee','ccc','locked_down'),
('gg','ddd','free');

insert into risk_level_in_area values('aaa','low'),('bbb','middle'),('ccc','high'),
('ddd','low');

 insert into`phone_ip_location` 
 values('01','astreet','aaera','acity','aprovince',20220621195540,'12341'),
('01','bstreet','baera','acity','aprovince',20220619131530,'12341'),
('01','cstreet','caera','acity','aprovince',20220621202011,'12345'),
('01','astreet','aaera','acity','aprovince',20220618143540,'12342') ,
('01','dstreet','daera','gcity','cprovince',20220621195540,'12343');

insert into `test_sites` values
('04','aa','aaa','mix','lab1','1'),('04','bb','aaa','mix','lab1','2'),
('04','aa','aaa','single','lab1','1'),('04','aa','bbb','mix','lab2','1'),
('04','cc','bbb','single','lab3','2'),('04','aa','ccc','mix','lab2','1'),
('04','dd','ccc','mix','lab2','2'),('04','ee','ccc','single','lab3','3'),
('04','gg','ddd','mix','lab1','1');


insert into test_appointment_and_result values
 ('12342',20220623080000,'single','lab1','negitive');

insert into vaccine_appointment_and_result values ('12341','1','company1',20220616103000);