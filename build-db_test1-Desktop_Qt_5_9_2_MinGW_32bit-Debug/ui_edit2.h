/********************************************************************************
** Form generated from reading UI file 'edit2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT2_H
#define UI_EDIT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit2
{
public:
    QLabel *change_lb;
    QComboBox *choose_op;
    QTableWidget *table;
    QPushButton *add_btn;
    QComboBox *choose_db;
    QLabel *label;
    QTableWidget *add_tb;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *back;
    QLabel *label_3;
    QPushButton *update_btn;
    QLabel *label_4;
    QPushButton *delete_btn;

    void setupUi(QWidget *edit2)
    {
        if (edit2->objectName().isEmpty())
            edit2->setObjectName(QStringLiteral("edit2"));
        edit2->resize(788, 539);
        edit2->setMinimumSize(QSize(788, 539));
        change_lb = new QLabel(edit2);
        change_lb->setObjectName(QStringLiteral("change_lb"));
        change_lb->setGeometry(QRect(20, 420, 201, 61));
        choose_op = new QComboBox(edit2);
        choose_op->setObjectName(QStringLiteral("choose_op"));
        choose_op->setGeometry(QRect(20, 160, 211, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_op->sizePolicy().hasHeightForWidth());
        choose_op->setSizePolicy(sizePolicy);
        table = new QTableWidget(edit2);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(250, 20, 501, 351));
        add_btn = new QPushButton(edit2);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(20, 470, 91, 31));
        choose_db = new QComboBox(edit2);
        choose_db->setObjectName(QStringLiteral("choose_db"));
        choose_db->setGeometry(QRect(20, 90, 211, 31));
        choose_db->setMinimumSize(QSize(211, 31));
        label = new QLabel(edit2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 211, 41));
        add_tb = new QTableWidget(edit2);
        add_tb->setObjectName(QStringLiteral("add_tb"));
        add_tb->setGeometry(QRect(250, 410, 501, 101));
        pushButton = new QPushButton(edit2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 210, 91, 31));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        label_2 = new QLabel(edit2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 101, 16));
        back = new QPushButton(edit2);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 10, 91, 31));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        label_3 = new QLabel(edit2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 260, 231, 20));
        update_btn = new QPushButton(edit2);
        update_btn->setObjectName(QStringLiteral("update_btn"));
        update_btn->setGeometry(QRect(20, 290, 91, 31));
        label_4 = new QLabel(edit2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 330, 221, 31));
        delete_btn = new QPushButton(edit2);
        delete_btn->setObjectName(QStringLiteral("delete_btn"));
        delete_btn->setGeometry(QRect(20, 370, 91, 31));

        retranslateUi(edit2);

        QMetaObject::connectSlotsByName(edit2);
    } // setupUi

    void retranslateUi(QWidget *edit2)
    {
        edit2->setWindowTitle(QApplication::translate("edit2", "\347\256\241\347\220\206\346\225\260\346\215\256", Q_NULLPTR));
        change_lb->setText(QApplication::translate("edit2", "\350\257\267\350\276\223\345\205\245\344\270\200\347\273\204\346\225\260\346\215\256", Q_NULLPTR));
        choose_op->clear();
        choose_op->insertItems(0, QStringList()
         << QApplication::translate("edit2", "\346\237\245\347\234\213", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\242\236\345\212\240", Q_NULLPTR)
         << QApplication::translate("edit2", "\344\277\256\346\224\271", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\210\240\351\231\244", Q_NULLPTR)
        );
        add_btn->setText(QApplication::translate("edit2", "\346\267\273\345\212\240", Q_NULLPTR));
        choose_db->clear();
        choose_db->insertItems(0, QStringList()
         << QApplication::translate("edit2", "\345\270\202\346\260\221\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\220\204\345\214\272\351\243\216\351\231\251\347\255\211\347\272\247", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\220\204\350\241\227\351\201\223\347\256\241\346\216\247\347\261\273\345\236\213", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\270\202\346\260\221\346\240\270\351\205\270\346\243\200\346\265\213\346\212\245\345\221\212", Q_NULLPTR)
         << QApplication::translate("edit2", "\345\270\202\346\260\221\347\226\253\350\213\227\346\212\245\345\221\212", Q_NULLPTR)
         << QApplication::translate("edit2", "\346\240\270\351\205\270\346\243\200\346\265\213\347\202\271", Q_NULLPTR)
         << QApplication::translate("edit2", "\347\226\253\350\213\227\345\256\232\347\202\271\345\214\273\351\231\242", Q_NULLPTR)
         << QApplication::translate("edit2", "\346\240\270\351\205\270\346\243\200\346\265\213\344\270\232\345\212\241\347\261\273\345\236\213", Q_NULLPTR)
         << QApplication::translate("edit2", "\347\226\253\350\213\227\347\261\273\345\236\213", Q_NULLPTR)
        );
        label->setText(QApplication::translate("edit2", "\351\200\211\346\213\251\351\234\200\350\246\201\347\256\241\347\220\206\347\232\204\345\272\223", Q_NULLPTR));
        pushButton->setText(QApplication::translate("edit2", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("edit2", "\351\200\211\346\213\251\346\223\215\344\275\234", Q_NULLPTR));
        back->setText(QApplication::translate("edit2", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("edit2", "\350\257\267\345\217\214\345\207\273\351\200\211\346\213\251\351\234\200\350\246\201\344\277\256\346\224\271\347\232\204\345\215\225\345\205\203", Q_NULLPTR));
        update_btn->setText(QApplication::translate("edit2", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("edit2", "\350\257\267\351\200\211\346\213\251\351\234\200\350\246\201\345\210\240\351\231\244\347\232\204\350\241\214", Q_NULLPTR));
        delete_btn->setText(QApplication::translate("edit2", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edit2: public Ui_edit2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT2_H
