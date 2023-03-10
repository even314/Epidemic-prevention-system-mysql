#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = 0);
    ~manager();

private slots:
    void on_edit_data_clicked();

    void on_back_clicked();

    void on_statistic_clicked();

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
