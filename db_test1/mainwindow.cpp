#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citizens.h"
//#include "connection.h"
#include "manager.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     //createConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  citizens* c=new citizens;
  this->close();
  c->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    manager* m=new manager;
    this->close();
    m->show();
}
