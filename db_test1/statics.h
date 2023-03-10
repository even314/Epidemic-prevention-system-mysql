#ifndef STATICS_H
#define STATICS_H

#include <QWidget>

namespace Ui {
class statics;
}

class statics : public QWidget
{
    Q_OBJECT

public:
    explicit statics(QWidget *parent = 0);
    ~statics();

private slots:
    void on_back_clicked();

    void on_positive_clicked();

    void on_locked_down_citizens_clicked();

    void on_key_citizens_clicked();

private:
    Ui::statics *ui;
};

#endif // STATICS_H
