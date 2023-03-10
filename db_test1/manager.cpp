#include "manager.h"
#include "ui_manager.h"
#include"edit2.h"
#include"mainwindow.h"
#include"statics.h"
manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
}

manager::~manager()
{
    delete ui;
}

void manager::on_edit_data_clicked()
{
edit2* e=new edit2;
this->close();
e->show();
}

void manager::on_back_clicked()
{
    MainWindow* m=new MainWindow;
    this->close();
    m->show();
}

void manager::on_statistic_clicked()
{
    statics* s=new statics;
    this->close();
    s->show();
}
