#include "vaccine_appointment.h"
#include "ui_vaccine_appointment.h"
#include "citizens.h"
#include "qsqlquery.h"
#include <QDebug>
#include <qdebug.h>
#include<QMessageBox>
vaccine_appointment::vaccine_appointment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vaccine_appointment)
{
    ui->setupUi(this);
    ui->personal_tb->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->vaccine_tb->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->vaccine_tb->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->vaccine_tb->setSelectionMode ( QAbstractItemView::SingleSelection);


}

vaccine_appointment::~vaccine_appointment()
{
    delete ui;
}

void vaccine_appointment::on_back_clicked()
{
    citizens* c=new citizens;
    this->close();
    c->show();
}

void vaccine_appointment::on_pushButton_clicked()
{
    ui->pushButton->setText("欢迎，"+ID);
    qDebug()<<ID;
    if(ID!=nullptr){

    QSqlQuery query;
    query.prepare("select type,company from `epidemic_system`.`vaccine_appointment_and_result` where ID=?");
    query.addBindValue(ID);
    query.exec();
   // query.exec("select type,company from `epidemic_system`.`vaccine_appointment_and_result` where ID='"+ID+"';");
    int rowindex=0;
    while(query.next()){
        for(int i=0;i<2;i++)
        {
            QString result=query.value(i).toString();
            qDebug()<<result;
            QTableWidgetItem *item=new QTableWidgetItem(result);
            ui->personal_tb->setItem(rowindex,i,item);
        }
       rowindex++;
    }
    rowindex=0;
    query.exec("select count(*) from `epidemic_system`.`hospital`;");
    query.next();
    int row=query.value(0).toInt();
    ui->vaccine_tb->setRowCount(row);
    query.exec("select * from `epidemic_system`.`hospital`;");
    while(query.next()){
        for(int i=0;i<6;i++)
        {
            QString result=query.value(i).toString();
            qDebug()<<result;
            QTableWidgetItem *item=new QTableWidgetItem(result);
            ui->vaccine_tb->setItem(rowindex,i,item);
        }
       rowindex++;
    }
    }
}

void vaccine_appointment::on_confirm_clicked()
{
    //疫苗表
    int vaccine_row=ui->vaccine_tb->currentRow();
    //3:company,4:type
    QString company=ui->vaccine_tb->item(vaccine_row,3)->text();
    QString type=ui->vaccine_tb->item(vaccine_row,4)->text();
    QString time=ui->calendarWidget->selectedDate().toString("yyyyMMdd")+ui->hour->currentText()+ui->min->currentText()+"00";
    QSqlQuery query;
    QString stm="insert into vaccine_appointment_and_result values ('"+ID+"','"+type+"','"+company+"',"+time+");";
    qDebug()<<stm;
    query.exec(stm);
    QMessageBox::information(this,"恭喜：","预约成功！");
}
