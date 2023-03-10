#ifndef CITIZENS_H
#define CITIZENS_H
#include<textdialog.h>
#include <QWidget>
#include"showdialog.h"
namespace Ui {
class citizens;
}

class citizens : public QWidget
{
    Q_OBJECT

public:
    explicit citizens(QWidget *parent = 0);
    textdialog* td;
     QString ID;
    void setinf(showdialog*,QString,QString,int,int);
    ~citizens();
//signals:
//    void sendID(QString);
private slots:
    void on_back_clicked();

    void on_in_id_clicked();

     void lineEditGetTem(QString str);

     void on_vaccine_appointment_clicked();

     void on_test_appiontment_clicked();

     void on_test_result_clicked();

     void on_vaccine_result_clicked();

     void on_risk_region_inside_a_clicked();

     void on_risk_region_ouside_A_clicked();

     void on_health_code_clicked();

     void on_is_key_range_clicked();

private:
    Ui::citizens *ui;
};

#endif // CITIZENS_H
