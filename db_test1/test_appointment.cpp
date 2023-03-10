#include "test_appointment.h"
#include "ui_test_appointment.h"
#include "citizens.h"
#include<QDebug>
#include<qsqlquery.h>
#include<QMessageBox>
test_appointment::test_appointment(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test_appointment)
{
    ui->setupUi(this);
    ui->personal_tb->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->test_tb->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->test_tb->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->test_tb->setSelectionMode ( QAbstractItemView::SingleSelection);
}

test_appointment::~test_appointment()
{
    delete ui;
}

void test_appointment::on_back_clicked()
{
    citizens* c=new citizens;
    this->close();
    c->show();
}

void test_appointment::on_pushButton_clicked()
{
    ui->pushButton->setText("欢迎，"+ID);
    qDebug()<<ID;
    if(ID!=nullptr){

    QSqlQuery query;
    query.prepare("select time,type,laboratory,result from `epidemic_system`.`test_appointment_and_result` where ID=?");
    query.addBindValue(ID);
    query.exec();
    int rowindex=0;
    while(query.next()){
        for(int i=0;i<4;i++)
        {
            QString result=query.value(i).toString();
            qDebug()<<result;
            QTableWidgetItem *item=new QTableWidgetItem(result);
            ui->personal_tb->setItem(rowindex,i,item);
        }
       rowindex++;
    }
    rowindex=0;
    query.exec("select count(*) from `epidemic_system`.`test_sites`natural join `epidemic_system`.`nucleic_acid_tests`;");
    query.next();
    int row=query.value(0).toInt();
    ui->test_tb->setRowCount(row);
    query.exec("select street_number,street_name,area,type,laboratory,site_id,fee from test_sites natural join nucleic_acid_tests;");
    while(query.next()){
        for(int i=0;i<7;i++)
        {
            QString result=query.value(i).toString();
            qDebug()<<result;
            QTableWidgetItem *item=new QTableWidgetItem(result);
            ui->test_tb->setItem(rowindex,i,item);
        }
       rowindex++;
    }
    }
}

void test_appointment::on_confirm_clicked()
{
    int test_row=ui->test_tb->currentRow();
    QString type=ui->test_tb->item(test_row,3)->text();
    QString lab=ui->test_tb->item(test_row,4)->text();
    QString time=ui->calendarWidget->selectedDate().toString("yyyyMMdd")+ui->hour->currentText()+ui->min->currentText()+"00";
    QSqlQuery query;
    QString stm="insert into test_appointment_and_result values ('"+ID+"',"+time+",'"+type+"','"+lab+"',null);";
    qDebug()<<stm;
    query.exec(stm);
    QMessageBox::information(this,"恭喜：","预约成功！");
}
