#ifndef SHOWDIALOG_H
#define SHOWDIALOG_H

#include <QDialog>

namespace Ui {
class showdialog;
}

class showdialog : public QDialog
{
    Q_OBJECT

public:
    explicit showdialog(QWidget *parent = 0);
    QStringList headers;
    int row;
    int col;
    QString** item;
    ~showdialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::showdialog *ui;
};

#endif // SHOWDIALOG_H
