#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QDebug>
#include<qdebug.h>
#include <QMessageBox>
#include <QSqlError>
static void createconnection(){
    qDebug()<<QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("epidemic_system");
    db.setUserName("root");
    db.setPassword("12345");
    if(!db.open())
    {
        qDebug() << "fail to connect mysql" << db.lastError().text();
    }
    else qDebug()<<"succeed";
}


#endif // CONNECTION_H
