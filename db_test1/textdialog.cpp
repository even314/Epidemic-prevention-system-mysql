#include "textdialog.h"
#include "ui_textdialog.h"
#include "edit2.h"
QString str;
textdialog::textdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::textdialog)
{
    ui->setupUi(this);
    this->setModal(true);
}

textdialog::~textdialog()
{
    delete ui;
}

void textdialog::on_buttonBox_accepted()
{
    str= ui->lineEdit->text();
    qDebug()<<"getstr"<<str;
    emit sendString(str);
    this->close();
}


void textdialog::on_buttonBox_rejected()
{
    this->close();
}



void textdialog::on_lineEdit_editingFinished()
{
    str= ui->lineEdit->text();
}
