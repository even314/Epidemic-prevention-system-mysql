#include "showdialog.h"
#include "ui_showdialog.h"
#include "QTableWidgetItem"

showdialog::showdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showdialog)
{
    ui->setupUi(this);
}

showdialog::~showdialog()
{
    delete ui;
}

void showdialog::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount(row);
    ui->tableWidget->setColumnCount(col);
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
       {
            QTableWidgetItem * it=new QTableWidgetItem(item[i][j]);
            ui->tableWidget->setItem(i,j,it);
        }
    }
}
