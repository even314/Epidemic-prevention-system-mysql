#include "citizens.h"
#include "ui_citizens.h"
#include"mainwindow.h"
#include"vaccine_appointment.h"
#include <QDebug>
#include"test_appointment.h"
#include<QSqlQuery>
#include<QMessageBox>
citizens::citizens(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::citizens)
{
    ui->setupUi(this);
    td=new textdialog;

    QObject::connect(td, SIGNAL(sendString(QString)), this,SLOT(lineEditGetTem(QString)));
}

citizens::~citizens()
{
    delete ui;
}
void citizens::on_back_clicked()
{
    MainWindow* w=new MainWindow;
    this->close();
    w->show();
}

void citizens::on_in_id_clicked()
{
    td->show();
}
void citizens::lineEditGetTem(QString str){
     ID=str;
    qDebug()<<"citizen gets id"<<ID;
}
void citizens::on_vaccine_appointment_clicked()
{
      //emit sendID(ID);
       qDebug()<<"citizens send id";
      vaccine_appointment* va=new vaccine_appointment;
      qDebug()<<"this.id:"<<this->ID;
      va->ID=this->ID;
      qDebug()<<"va.id:"<<va->ID;
      this->close();
      va->show();
}

void citizens::on_test_appiontment_clicked()
{
    test_appointment* ta=new test_appointment;
    ta->ID=this->ID;
    this->close();
    ta->show();
}
void citizens::on_test_result_clicked()
{
    showdialog* sd=new showdialog;
    QString table_name="test_appointment_and_result";
    int row=2;
    int col=5;
    QSqlQuery query;
        sd->headers<<"ID"<<"time"<<"type"<<"laboratory"<<"result";
    query.prepare("select * from "+table_name+" where ID=?");
    query.addBindValue(ID);
    query.exec();
    int rowindex=0;
    sd->item=new QString*[row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    while(query.next()){
       for(int i=0;i<col;i++)sd->item[rowindex][i]=query.value(i).toString();
       rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}

void citizens::on_vaccine_result_clicked()
{
    showdialog* sd=new showdialog;
    QString table_name="vaccine_appointment_and_result";
    int row=3;
    int col=4;
    QSqlQuery query;
        sd->headers<<"ID"<<"type"<<"company"<<"time";
    query.prepare("select * from "+table_name+" where ID=?");
    query.addBindValue(ID);
    query.exec();
    int rowindex=0;
    sd->item=new QString*[row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    while(query.next()){
       for(int i=0;i<col;i++)sd->item[rowindex][i]=query.value(i).toString();
       rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}

void citizens::on_risk_region_inside_a_clicked()
{
    showdialog* sd=new showdialog;
    int col=2;
    QSqlQuery query;
    query.exec("SELECT COLUMN_NAME FROM INFORMATION_SCHEMA.COLUMNS where table_schema ='epidemic_system' AND table_name = 'risk_level_in_area'");
    while(query.next()){
        sd->headers<<query.value(0).toString();
    }
    query.exec("select count(*) from risk_level_in_area where risk_level !='low'");
    query.next();
    int row=query.value(0).toInt();
    int rowindex=0;
    sd->item=new QString* [row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    query.exec("select * from risk_level_in_area where risk_level !='low'");
    while(query.next()){
       for(int i=0;i<col;i++)sd->item[rowindex][i]=query.value(i).toString();
       rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}

void citizens::on_risk_region_ouside_A_clicked()
{
    showdialog* sd=new showdialog;
    int col=4;
    QSqlQuery query;
    query.exec("SELECT COLUMN_NAME FROM INFORMATION_SCHEMA.COLUMNS where table_schema ='epidemic_system' AND table_name = 'riskzone_outside_A'");
    while(query.next()){
        sd->headers<<query.value(0).toString();
    }
    query.exec("select count(*) from riskzone_outside_A");
    query.next();
    int row=query.value(0).toInt();
    int rowindex=0;
    sd->item=new QString* [row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    query.exec("select * from riskzone_outside_A");
    while(query.next()){
       for(int i=0;i<col;i++)sd->item[rowindex][i]=query.value(i).toString();
       rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}

void citizens::on_health_code_clicked()
{
    QSqlQuery query;
    query.prepare("select health_code(?)");
    query.addBindValue(ID);
    query.exec();
    query.next();
    QString re=query.value(0).toString();
    QMessageBox::information(this,"你的健康码颜色：",re);
}

void citizens::on_is_key_range_clicked()
{
    QSqlQuery query;
    query.prepare("select count(*) from key_citizens where key_id= ?");
    query.addBindValue(ID);
    query.exec();
    qDebug()<<"exec succeed";
    query.next();
    int row=query.value(0).toInt();
    qDebug()<<"row succeed"<<row;
    if(row==0){QMessageBox::information(this,"查询结果：","您14天内尚未涉足A市排查范围！");
    return;
    }
    showdialog* sd=new showdialog;
    int col=5;
    int rowindex=0;
    sd->item=new QString* [row];
    for(int i=0;i<row;i++)sd->item[i]=new QString[col];
    sd->headers<<"route_street"<<"route_area"<<"city"<<"province"<<"time";
    query.prepare("select route_street,route_area,city,province,time from key_citizens where key_id=?");
    query.addBindValue(ID);
    query.exec();
    while(query.next()){
       for(int i=0;i<col;i++)sd->item[rowindex][i]=query.value(i).toString();
       rowindex++;
    }
    sd->col=col;
    sd->row=row;
    sd->show();
}
