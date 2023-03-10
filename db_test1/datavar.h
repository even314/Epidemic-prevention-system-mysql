#ifndef DATAVAR_H
#define DATAVAR_H
#include <qmap.h>
#include <QMap>

const QString att0[]={"ID","name","phone_number","street_number","street_name","area"};
const QString att1[]= {"area","risk_level"};
const QString att2[]= {"street_name","area","control_type"};
const QString att3[]={"ID","time","type","laboratory","result"};
const QString att4[]={"ID","company","type","time"};
const QString att5[]={"street_number","street_name","area","type","laboratory","site_id"};
const QString att6[]={"street_number","street_name","area","company","type","name"};
const QString att7[]={"type","laboratory","fee"};
const QString att8[]={"company","type"};
const QString* attcollection[9]={att0,att1,att2,att3,att4,att5,att6,att7,att8};
const int attlen[]={6,2,3,5,4,6,6,3,2};
//primary key
const QString pri0[]={"ID"};
const QString pri1[]= {"area"};
const QString pri2[]= {"street_name","area"};
const QString pri3[]={"ID","time"};
const QString pri4[]={"ID","company","type"};
const QString pri5[]={"street_number","street_name","area","type","laboratory"};
const QString pri6[]={"street_number","street_name","area","company","type"};
const QString pri7[]={"type","laboratory"};
const QString pri8[]={"company","type"};
const QString* pricollection[9]={pri0,pri1,pri2,pri3,pri4,pri5,pri6,pri7,pri8};

const int prilen[]={1,1,2,2,3,5,5,2,2};

const QMap<int,QString> dbmap={
    std::map<int,QString>::value_type(0,"citizens"),
    std::map<int,QString>::value_type(1,"risk_level_in_area"),
    std::map<int,QString>::value_type(2,"control_type_in_a"),
    std::map<int,QString>::value_type(3,"test_appointment_and_result"),
    std::map<int,QString>::value_type(4,"vaccine_appointment_and_result"),
    std::map<int,QString>::value_type(5,"test_sites"),
    std::map<int,QString>::value_type(6,"hospital"),
    std::map<int,QString>::value_type(7,"nucleic_acid_tests"),
    std::map<int,QString>::value_type(8,"vaccine_inoculation")
};

#endif // DATAVAR_H
