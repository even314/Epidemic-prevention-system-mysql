#ifndef TEXTDIALOG_H
#define TEXTDIALOG_H

#include <QDialog>

namespace Ui {
class textdialog;
}

class textdialog : public QDialog
{
    Q_OBJECT

public:
    explicit textdialog(QWidget *parent = 0);
    //QString getuertext();
    ~textdialog();
signals:
    void sendString(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_lineEdit_editingFinished();

private:
    Ui::textdialog *ui;
//    QString user_text;
};

#endif // TEXTDIALOG_H
