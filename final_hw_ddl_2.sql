use epidemic_system;

drop table  if exists `vaccine_appointment_and_result`,`hospital`,
`vaccine_inoculation`,`test_appointment_and_result`,
`test_sites`,`risk_level_in_area`,`phone_ip_location`,
`control_type_in_a`,`regions_outside_a`,`key_area_standard`,
`citizens`,`streets_in_a`,`nucleic_acid_tests` ;

-- 生成数据库表：
CREATE TABLE `streets_in_a` (
  `street_number` VARCHAR(45) NOT NULL,
  `street_name` VARCHAR(45) NOT NULL,
  `area` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`street_number`, `street_name`, `area`));

CREATE TABLE `citizens` (
  `ID` VARCHAR(45) NOT NULL,
  `name` VARCHAR(45) NULL,
  `phone_number` VARCHAR(45) NULL,
  `street_number` VARCHAR(45) NULL,
  `street_name` VARCHAR(45) NULL,
  `area` VARCHAR(45) NULL,
  PRIMARY KEY (`ID`),
  INDEX `citizens_fk_idx` (`street_number` ASC, `street_name` ASC, `area` ASC) VISIBLE,
  CONSTRAINT `citizens_fk`
    FOREIGN KEY (`street_number` , `street_name` , `area`)
    REFERENCES `streets_in_a` (`street_number` , `street_name` , `area`)
    ON DELETE SET NULL
ON UPDATE RESTRICT);

CREATE TABLE `risk_level_in_area` (
  `area` VARCHAR(45) NOT NULL,
  `risk_level` VARCHAR(45) NULL,
  PRIMARY KEY (`area`));

CREATE TABLE `control_type_in_a` (
  `street_name` VARCHAR(45) NOT NULL,
 `area` VARCHAR(45) NOT NULL,
  `control_type` VARCHAR(45) NULL,
  PRIMARY KEY (`street_name`, `area`));

CREATE TABLE `regions_outside_a` (
  `street_number` VARCHAR(45) NOT NULL,
  `street_name` VARCHAR(45) NOT NULL,
  `area` VARCHAR(45) NOT NULL,
  `city` VARCHAR(45) NOT NULL,
  `province` VARCHAR(45) NOT NULL,
  `risk_level` VARCHAR(45) NULL,
  `control_type` VARCHAR(45) NULL,
  PRIMARY KEY (`street_number`, `street_name`, `area`, `city`, `province`));


CREATE TABLE `key_area_standard` (
  `risk_level` VARCHAR(45) NOT NULL,
  `control_type` VARCHAR(45) NOT NULL,
  `is_key_area` VARCHAR(45) NULL,
  PRIMARY KEY (`risk_level`, `control_type`));

CREATE TABLE `phone_ip_location` (
  `street_number` VARCHAR(45) NOT NULL,
  `street_name` VARCHAR(45) NOT NULL,
  `area` VARCHAR(45) NOT NULL,
  `city` VARCHAR(45) NOT NULL,
  `province` VARCHAR(45) NOT NULL,
  `time` datetime NOT NULL,
  `ID` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`street_number`, `street_name`, `area`, `city`, `province`, `time`, `ID`),
  INDEX `ip_citizens_fk_idx` (`ID` ASC) VISIBLE,
  CONSTRAINT `ip_citizens_fk`
    FOREIGN KEY (`ID`)
    REFERENCES `citizens` (`ID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
ALTER TABLE `phone_ip_location` 
ADD CONSTRAINT `ip_regions_fk`
  FOREIGN KEY (`street_number` , `street_name` , `area` , `city` , `province`)
  REFERENCES 
`regions_outside_a` (`street_number` , `street_name` , `area` , `city` , `province`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `vaccine_inoculation` (
  `company` VARCHAR(45) NOT NULL,
  `type` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`company`, `type`));

CREATE TABLE `vaccine_appointment_and_result` (
  `ID` VARCHAR(45) NOT NULL,
  `type` VARCHAR(45) NOT NULL,
  `company` VARCHAR(45) NULL,
  `time` datetime NULL,
  PRIMARY KEY (`ID`, `type`),
  CONSTRAINT `appointment_citizens_fk`
    FOREIGN KEY (`ID`)
    REFERENCES `citizens` (`ID`)
    ON DELETE NO ACTION
ON UPDATE NO ACTION);
ALTER TABLE 
`vaccine_appointment_and_result` 
ADD INDEX `appiointment_vaccine_fk_idx` (`company` ASC, `type` ASC) VISIBLE;

ALTER TABLE 
`vaccine_appointment_and_result` 
ADD CONSTRAINT `appiointment_vaccine_fk`
  FOREIGN KEY (`company` , `type`)
  REFERENCES `vaccine_inoculation` 
(`company` , `type`)
  ON DELETE NO ACTION
  ON UPDATE NO ACTION;

CREATE TABLE `hospital` (
  `street_number` VARCHAR(45) NOT NULL,
  `street_name` VARCHAR(45) NOT NULL,
  `area` VARCHAR(45) NOT NULL,
  `company` VARCHAR(45)  NOT NULL,
  `type` VARCHAR(45)  NOT NULL,
  `name` VARCHAR(45) NULL,
  PRIMARY KEY (`street_number`, `street_name`, `area`,`company` , `type`),
  INDEX `hospital_vaccine_fk_idx` (`company` ASC, `type` ASC) VISIBLE,
  CONSTRAINT `hospital_street_fk`
    FOREIGN KEY (`street_number` , `street_name` , `area`)
    REFERENCES `streets_in_a` 
(`street_number` , `street_name` , `area`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `hospital_vaccine_fk`
    FOREIGN KEY (`company` , `type`)
    REFERENCES `vaccine_inoculation` 
(`company` , `type`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);

CREATE TABLE `nucleic_acid_tests` (
  `type` VARCHAR(45) NOT NULL,
  `laboratory` VARCHAR(45) NOT NULL,
  `fee` VARCHAR(45) NULL,
  PRIMARY KEY (`type`, `laboratory`));

CREATE TABLE `test_appointment_and_result` (
  `ID` VARCHAR(45) NOT NULL,
  `time` datetime NOT NULL,
   `type` VARCHAR(45) NULL,
  `laboratory` VARCHAR(45) NULL,
  `result` VARCHAR(45) NULL,
  PRIMARY KEY (`ID`,`time`),
  INDEX `tests_fk_idx` (`type` ASC, `laboratory` ASC) VISIBLE,
  CONSTRAINT `id_fk`
    FOREIGN KEY (`ID`)
    REFERENCES `citizens` (`ID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `tests_fk`
    FOREIGN KEY (`type` , `laboratory`)
    REFERENCES `nucleic_acid_tests` (`type` , `laboratory`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION);
CREATE TABLE `test_sites` (
  `street_number` VARCHAR(45) NOT NULL,
  `street_name` VARCHAR(45) NOT NULL,
  `area` VARCHAR(45) NOT NULL,
  `type` VARCHAR(45) NOT NULL,
  `laboratory` VARCHAR(45) NOT NULL,
  `site_id` VARCHAR(45) NULL,
  PRIMARY KEY (`street_number`, `street_name`, `area`, `type`, `laboratory`),
  INDEX `test_fk_idx` (`type` ASC, `laboratory` ASC) VISIBLE,
  CONSTRAINT `street_fk`
    FOREIGN KEY (`street_number` , `street_name` , `area`)
    REFERENCES `streets_in_a` (`street_number` , `street_name` , `area`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `test_fk`
    FOREIGN KEY (`type` , `laboratory`)
    REFERENCES `nucleic_acid_tests` (`type` , `laboratory`)
    ON DELETE NO ACTION
ON UPDATE NO ACTION);