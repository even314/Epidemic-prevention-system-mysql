#ifndef TEST_APPOINTMENT_H
#define TEST_APPOINTMENT_H

#include <QWidget>

namespace Ui {
class test_appointment;
}

class test_appointment : public QWidget
{
    Q_OBJECT

public:
    explicit test_appointment(QWidget *parent = 0);
    QString ID;
    ~test_appointment();

private slots:
    void on_back_clicked();

    void on_pushButton_clicked();

    void on_confirm_clicked();

private:
    Ui::test_appointment *ui;
};

#endif // TEST_APPOINTMENT_H
