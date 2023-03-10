/********************************************************************************
** Form generated from reading UI file 'test_appointment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_APPOINTMENT_H
#define UI_TEST_APPOINTMENT_H

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

class Ui_test_appointment
{
public:
    QLabel *label_4;
    QPushButton *pushButton;
    QCalendarWidget *calendarWidget;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *back;
    QLabel *label;
    QPushButton *confirm;
    QTableWidget *personal_tb;
    QTableWidget *test_tb;
    QLabel *label_2;
    QLabel *label_8;
    QComboBox *min;
    QLabel *label_6;
    QComboBox *hour;

    void setupUi(QWidget *test_appointment)
    {
        if (test_appointment->objectName().isEmpty())
            test_appointment->setObjectName(QStringLiteral("test_appointment"));
        test_appointment->resize(1654, 718);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(test_appointment->sizePolicy().hasHeightForWidth());
        test_appointment->setSizePolicy(sizePolicy);
        test_appointment->setMinimumSize(QSize(1654, 718));
        label_4 = new QLabel(test_appointment);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 230, 291, 31));
        pushButton = new QPushButton(test_appointment);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 19, 461, 31));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        calendarWidget = new QCalendarWidget(test_appointment);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 320, 811, 361));
        label_3 = new QLabel(test_appointment);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(870, 10, 771, 41));
        label_5 = new QLabel(test_appointment);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 280, 391, 21));
        back = new QPushButton(test_appointment);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(1410, 590, 221, 61));
        QFont font;
        font.setPointSize(11);
        back->setFont(font);
        label = new QLabel(test_appointment);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 321, 41));
        confirm = new QPushButton(test_appointment);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(1050, 590, 211, 61));
        confirm->setFont(font);
        personal_tb = new QTableWidget(test_appointment);
        if (personal_tb->columnCount() < 4)
            personal_tb->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        personal_tb->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (personal_tb->rowCount() < 3)
            personal_tb->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        personal_tb->setVerticalHeaderItem(2, __qtablewidgetitem6);
        personal_tb->setObjectName(QStringLiteral("personal_tb"));
        personal_tb->setGeometry(QRect(20, 70, 531, 121));
        test_tb = new QTableWidget(test_appointment);
        if (test_tb->columnCount() < 7)
            test_tb->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        test_tb->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        test_tb->setObjectName(QStringLiteral("test_tb"));
        test_tb->setGeometry(QRect(670, 70, 951, 201));
        label_2 = new QLabel(test_appointment);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 261, 31));
        label_8 = new QLabel(test_appointment);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(1280, 450, 81, 81));
        QFont font1;
        font1.setPointSize(14);
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        min = new QComboBox(test_appointment);
        min->setObjectName(QStringLiteral("min"));
        min->setGeometry(QRect(1410, 460, 181, 61));
        QFont font2;
        font2.setPointSize(13);
        min->setFont(font2);
        label_6 = new QLabel(test_appointment);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1050, 320, 281, 101));
        QFont font3;
        font3.setPointSize(12);
        label_6->setFont(font3);
        hour = new QComboBox(test_appointment);
        hour->setObjectName(QStringLiteral("hour"));
        hour->setGeometry(QRect(1050, 460, 181, 61));
        hour->setFont(font1);

        retranslateUi(test_appointment);

        QMetaObject::connectSlotsByName(test_appointment);
    } // setupUi

    void retranslateUi(QWidget *test_appointment)
    {
        test_appointment->setWindowTitle(QApplication::translate("test_appointment", "\346\240\270\351\205\270\346\243\200\346\265\213\351\242\204\347\272\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("test_appointment", "\350\257\267\345\234\250\345\217\263\350\241\250\344\270\255\351\200\211\346\213\251\346\234\215\345\212\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("test_appointment", "\347\202\271\345\207\273\345\210\235\345\247\213\345\214\226", Q_NULLPTR));
        label_3->setText(QApplication::translate("test_appointment", "\346\240\270\351\205\270\346\243\200\346\265\213\347\202\271\345\217\212\346\240\270\351\205\270\344\270\232\345\212\241", Q_NULLPTR));
        label_5->setText(QApplication::translate("test_appointment", "\350\257\267\351\200\211\346\213\251\346\227\245\346\234\237", Q_NULLPTR));
        back->setText(QApplication::translate("test_appointment", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("test_appointment", "\347\226\253\350\213\227\346\216\245\347\247\215\351\242\204\347\272\246", Q_NULLPTR));
        confirm->setText(QApplication::translate("test_appointment", "\347\241\256\345\256\232\351\242\204\347\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = personal_tb->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("test_appointment", "\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = personal_tb->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("test_appointment", "\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = personal_tb->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("test_appointment", "\347\254\254\344\270\211\346\226\271\346\243\200\346\265\213\346\234\272\346\236\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = personal_tb->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("test_appointment", "\347\273\223\346\236\234", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = personal_tb->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("test_appointment", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = personal_tb->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("test_appointment", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = personal_tb->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("test_appointment", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = test_tb->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("test_appointment", "\350\241\227\351\201\223\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = test_tb->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("test_appointment", "\350\241\227\351\201\223", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = test_tb->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("test_appointment", "\345\214\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = test_tb->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("test_appointment", "\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = test_tb->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("test_appointment", "\347\254\254\344\270\211\346\226\271\346\243\200\346\265\213\346\234\272\346\236\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = test_tb->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("test_appointment", "\346\243\200\346\265\213\347\202\271\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = test_tb->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("test_appointment", "\350\264\271\347\224\250", Q_NULLPTR));
        label_2->setText(QApplication::translate("test_appointment", "\345\275\223\345\211\215\357\274\214\344\275\240\347\232\204\346\240\270\351\205\270\346\243\200\346\265\213\346\212\245\345\221\212", Q_NULLPTR));
        label_8->setText(QApplication::translate("test_appointment", ":", Q_NULLPTR));
        min->clear();
        min->insertItems(0, QStringList()
         << QApplication::translate("test_appointment", "00", Q_NULLPTR)
         << QApplication::translate("test_appointment", "10", Q_NULLPTR)
         << QApplication::translate("test_appointment", "20", Q_NULLPTR)
         << QApplication::translate("test_appointment", "30", Q_NULLPTR)
         << QApplication::translate("test_appointment", "40", Q_NULLPTR)
         << QApplication::translate("test_appointment", "50", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("test_appointment", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        hour->clear();
        hour->insertItems(0, QStringList()
         << QApplication::translate("test_appointment", "08", Q_NULLPTR)
         << QApplication::translate("test_appointment", "09", Q_NULLPTR)
         << QApplication::translate("test_appointment", "10", Q_NULLPTR)
         << QApplication::translate("test_appointment", "11", Q_NULLPTR)
         << QApplication::translate("test_appointment", "12", Q_NULLPTR)
         << QApplication::translate("test_appointment", "13", Q_NULLPTR)
         << QApplication::translate("test_appointment", "14", Q_NULLPTR)
         << QApplication::translate("test_appointment", "15", Q_NULLPTR)
         << QApplication::translate("test_appointment", "16", Q_NULLPTR)
         << QApplication::translate("test_appointment", "17", Q_NULLPTR)
         << QApplication::translate("test_appointment", "18", Q_NULLPTR)
         << QApplication::translate("test_appointment", "19", Q_NULLPTR)
         << QApplication::translate("test_appointment", "20", Q_NULLPTR)
         << QApplication::translate("test_appointment", "21", Q_NULLPTR)
         << QApplication::translate("test_appointment", "22", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class test_appointment: public Ui_test_appointment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_APPOINTMENT_H
