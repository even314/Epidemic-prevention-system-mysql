#include "statics.h"
#include "ui_statics.h"
#include"manager.h"
#include<QSqlQuery>
#include<QMessageBox>
#include<showdialog.h>
statics::statics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statics)
{
    ui->setupUi(this);
}

statics::~statics()
{
    delete ui;
}

void statics::on_back_clicked()
{
    manager* m=new manager;
    this->close();
    m->show();
}

void statics::on_positive_clicked()
{
    QSqlQuery query;
    query.exec("select count(*) from test_appointment_and_result where result='positive' and TIMESTAMPDIFF(DAY,time,now())=0;");
    query.next();
    QString inf=query.value(0).toString();
    QMessageBox::information(this,"今日新增：",inf);
}

void statics::on_locked_down_citizens_clicked()
{
    QSqlQuery query;
    query.exec("select count(*)from locked_down_zone_citizens");
    query.next();
    int row=query.value(0).toInt();
    int col=6;
    showdialog *sd=new showdialog;
     sd->headers<<"ID"<<"name"<<"phone_number"<<"street_number"<<"street_name"<<"area";
    sd->item=new QString*[row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    int rowindex=0;
    query.exec("select * from locked_down_zone_citizens");
    while(query.next()){
        for(int i=0;i<col;i++)
        sd->item[rowindex][i]=query.value(i).toString();
        rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}

void statics::on_key_citizens_clicked()
{
    QSqlQuery query;
    query.exec("select count(*)from key_citizens");
    query.next();
    int row=query.value(0).toInt();
    int col=10;
    showdialog *sd=new showdialog;
     sd->headers<<"ID"<<"name"<<"phone_number"<<"area"<<"street_name"<<"route_street"<<"route_area"<<"city"<<"province"<<"time";
    sd->item=new QString*[row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    int rowindex=0;
    query.exec("select * from key_citizens");
    while(query.next()){
        for(int i=0;i<col;i++)
        sd->item[rowindex][i]=query.value(i).toString();
        rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}
