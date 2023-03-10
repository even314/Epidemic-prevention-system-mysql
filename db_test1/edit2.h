#ifndef EDIT2_H
#define EDIT2_H
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTableWidgetItem>
#include "textdialog.h"
#include <QString>
#include <qstring.h>
namespace Ui {
class edit2;
}

class edit2 : public QWidget
{
    Q_OBJECT

public:
    explicit edit2(QWidget *parent = 0);
    void getheaders(int,QStringList&);
    void showtb(int);
    void addtb(int);
    QString get_wherestm(int,int);
    QString get_table_name(int);
    void updatedb(int);
    void deletedb(int);
    textdialog* td;
    QString user_text;
    bool usertextlock=true;
    ~edit2();

private slots:
    void on_pushButton_clicked();

    void on_add_btn_clicked();

    void on_back_clicked();

    void on_update_btn_clicked();

    void on_table_currentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous);

    void lineEditGetTem(QString str);

    void on_delete_btn_clicked();

    void on_table_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::edit2 *ui;
};

#endif // EDIT2_H
