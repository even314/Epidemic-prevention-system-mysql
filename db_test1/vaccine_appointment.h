#ifndef VACCINE_APPOINTMENT_H
#define VACCINE_APPOINTMENT_H

#include <QWidget>

namespace Ui {
class vaccine_appointment;
}

class vaccine_appointment : public QWidget
{
    Q_OBJECT

public:
    explicit vaccine_appointment(QWidget *parent = 0);
    QString ID;
    ~vaccine_appointment();

private slots:
    void on_back_clicked();

    void on_pushButton_clicked();

    void on_confirm_clicked();

private:
    Ui::vaccine_appointment *ui;
};

#endif // VACCINE_APPOINTMENT_H
