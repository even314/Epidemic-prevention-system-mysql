/********************************************************************************
** Form generated from reading UI file 'vaccine_appointment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACCINE_APPOINTMENT_H
#define UI_VACCINE_APPOINTMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vaccine_appointment
{
public:
    QTableWidget *vaccine_tb;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *personal_tb;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCalendarWidget *calendarWidget;
    QComboBox *hour;
    QLabel *label_6;
    QComboBox *min;
    QLabel *label_8;
    QPushButton *confirm;
    QPushButton *back;
    QPushButton *pushButton;

    void setupUi(QWidget *vaccine_appointment)
    {
        if (vaccine_appointment->objectName().isEmpty())
            vaccine_appointment->setObjectName(QStringLiteral("vaccine_appointment"));
        vaccine_appointment->resize(1654, 718);
        vaccine_appointment->setMinimumSize(QSize(1300, 400));
        vaccine_tb = new QTableWidget(vaccine_appointment);
        if (vaccine_tb->columnCount() < 6)
            vaccine_tb->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        vaccine_tb->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        vaccine_tb->setObjectName(QStringLiteral("vaccine_tb"));
        vaccine_tb->setGeometry(QRect(540, 70, 1081, 201));
        label = new QLabel(vaccine_appointment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 321, 41));
        label_2 = new QLabel(vaccine_appointment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 261, 31));
        personal_tb = new QTableWidget(vaccine_appointment);
        if (personal_tb->columnCount() < 2)
            personal_tb->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        if (personal_tb->rowCount() < 3)
            personal_tb->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(2, __qtablewidgetitem10);
        personal_tb->setObjectName(QStringLiteral("personal_tb"));
        personal_tb->setGeometry(QRect(20, 70, 411, 121));
        label_3 = new QLabel(vaccine_appointment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(870, 10, 771, 41));
        label_4 = new QLabel(vaccine_appointment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 261, 31));
        label_5 = new QLabel(vaccine_appointment);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 280, 391, 21));
        calendarWidget = new QCalendarWidget(vaccine_appointment);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 320, 861, 361));
        hour = new QComboBox(vaccine_appointment);
        hour->setObjectName(QStringLiteral("hour"));
        hour->setGeometry(QRect(1000, 430, 181, 61));
        QFont font;
        font.setPointSize(14);
        hour->setFont(font);
        label_6 = new QLabel(vaccine_appointment);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1000, 290, 281, 101));
        QFont font1;
        font1.setPointSize(12);
        label_6->setFont(font1);
        min = new QComboBox(vaccine_appointment);
        min->setObjectName(QStringLiteral("min"));
        min->setGeometry(QRect(1360, 430, 181, 61));
        QFont font2;
        font2.setPointSize(13);
        min->setFont(font2);
        label_8 = new QLabel(vaccine_appointment);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1230, 420, 81, 81));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        confirm = new QPushButton(vaccine_appointment);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(1000, 580, 201, 61));
        QFont font3;
        font3.setPointSize(11);
        confirm->setFont(font3);
        back = new QPushButton(vaccine_appointment);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(1360, 580, 201, 61));
        back->setFont(font3);
        pushButton = new QPushButton(vaccine_appointment);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 19, 461, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        retranslateUi(vaccine_appointment);

        QMetaObject::connectSlotsByName(vaccine_appointment);
    } // setupUi

    void retranslateUi(QWidget *vaccine_appointment)
    {
        vaccine_appointment->setWindowTitle(QApplication::translate("vaccine_appointment", "\347\226\253\350\213\227\346\216\245\347\247\215\351\242\204\347\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = vaccine_tb->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("vaccine_appointment", "\350\241\227\351\201\223\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = vaccine_tb->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("vaccine_appointment", "\350\241\227\351\201\223", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = vaccine_tb->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("vaccine_appointment", "\345\214\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = vaccine_tb->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("vaccine_appointment", "\347\226\253\350\213\227\345\205\254\345\217\270", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = vaccine_tb->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("vaccine_appointment", "\347\254\254\345\207\240\351\222\210", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = vaccine_tb->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("vaccine_appointment", "\345\214\273\351\231\242\345\220\215\345\255\227", Q_NULLPTR));
        label->setText(QApplication::translate("vaccine_appointment", "\347\226\253\350\213\227\346\216\245\347\247\215\351\242\204\347\272\246", Q_NULLPTR));
        label_2->setText(QApplication::translate("vaccine_appointment", "\345\275\223\345\211\215\357\274\214\344\275\240\345\267\262\346\216\245\347\247\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = personal_tb->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("vaccine_appointment", "type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = personal_tb->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("vaccine_appointment", "company", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = personal_tb->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("vaccine_appointment", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = personal_tb->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("vaccine_appointment", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = personal_tb->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("vaccine_appointment", "3", Q_NULLPTR));
        label_3->setText(QApplication::translate("vaccine_appointment", "\346\217\220\344\276\233\346\216\245\347\247\215\346\234\215\345\212\241\347\232\204\345\214\273\351\231\242\345\217\212\347\226\253\350\213\227\347\261\273\345\236\213", Q_NULLPTR));
        label_4->setText(QApplication::translate("vaccine_appointment", "\350\257\267\345\234\250\345\217\263\350\241\250\344\270\255\351\200\211\346\213\251\346\234\215\345\212\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("vaccine_appointment", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        hour->clear();
        hour->insertItems(0, QStringList()
         << QApplication::translate("vaccine_appointment", "08", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "09", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "10", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "11", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "12", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "13", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "14", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "15", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "16", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "17", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "18", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "19", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "20", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "21", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "22", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("vaccine_appointment", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        min->clear();
        min->insertItems(0, QStringList()
         << QApplication::translate("vaccine_appointment", "00", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "10", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "20", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "30", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "40", Q_NULLPTR)
         << QApplication::translate("vaccine_appointment", "50", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("vaccine_appointment", ":", Q_NULLPTR));
        confirm->setText(QApplication::translate("vaccine_appointment", "\347\241\256\345\256\232\351\242\204\347\272\246", Q_NULLPTR));
        back->setText(QApplication::translate("vaccine_appointment", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton->setText(QApplication::translate("vaccine_appointment", "\347\202\271\345\207\273\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vaccine_appointment: public Ui_vaccine_appointment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACCINE_APPOINTMENT_H
