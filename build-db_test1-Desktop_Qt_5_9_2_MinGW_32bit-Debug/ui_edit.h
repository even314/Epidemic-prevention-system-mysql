/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

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

class Ui_edit
{
public:
    QLabel *label;
    QTableWidget *table;
    QComboBox *choose_db;
    QLabel *label_2;
    QComboBox *choose_op;
    QPushButton *pushButton;
    QTableWidget *add_tb;
    QLabel *add_lb;
    QPushButton *add_btn;

    void setupUi(QWidget *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName(QStringLiteral("edit"));
        edit->resize(767, 539);
        edit->setMinimumSize(QSize(767, 539));
        label = new QLabel(edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 211, 41));
        table = new QTableWidget(edit);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(250, 20, 501, 351));
        choose_db = new QComboBox(edit);
        choose_db->setObjectName(QStringLiteral("choose_db"));
        choose_db->setGeometry(QRect(21, 50, 211, 31));
        choose_db->setMinimumSize(QSize(211, 31));
        label_2 = new QLabel(edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 110, 101, 16));
        choose_op = new QComboBox(edit);
        choose_op->setObjectName(QStringLiteral("choose_op"));
        choose_op->setGeometry(QRect(21, 140, 211, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(choose_op->sizePolicy().hasHeightForWidth());
        choose_op->setSizePolicy(sizePolicy);
        pushButton = new QPushButton(edit);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 200, 91, 31));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        add_tb = new QTableWidget(edit);
        add_tb->setObjectName(QStringLiteral("add_tb"));
        add_tb->setGeometry(QRect(250, 410, 501, 101));
        add_lb = new QLabel(edit);
        add_lb->setObjectName(QStringLiteral("add_lb"));
        add_lb->setGeometry(QRect(50, 390, 181, 71));
        add_btn = new QPushButton(edit);
        add_btn->setObjectName(QStringLiteral("add_btn"));
        add_btn->setGeometry(QRect(50, 470, 101, 31));

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QWidget *edit)
    {
        edit->setWindowTitle(QApplication::translate("edit", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("edit", "\351\200\211\346\213\251\351\234\200\350\246\201\347\256\241\347\220\206\347\232\204\345\272\223", Q_NULLPTR));
        choose_db->clear();
        choose_db->insertItems(0, QStringList()
         << QApplication::translate("edit", "\345\270\202\346\260\221\345\237\272\346\234\254\344\277\241\346\201\257", Q_NULLPTR)
         << QApplication::translate("edit", "\345\220\204\345\214\272\351\243\216\351\231\251\347\255\211\347\272\247", Q_NULLPTR)
         << QApplication::translate("edit", "\345\220\204\350\241\227\351\201\223\347\256\241\346\216\247\347\261\273\345\236\213", Q_NULLPTR)
         << QApplication::translate("edit", "\345\270\202\346\260\221\346\240\270\351\205\270\346\243\200\346\265\213\346\212\245\345\221\212", Q_NULLPTR)
         << QApplication::translate("edit", "\345\270\202\346\260\221\347\226\253\350\213\227\346\212\245\345\221\212", Q_NULLPTR)
         << QApplication::translate("edit", "\346\240\270\351\205\270\346\243\200\346\265\213\347\202\271", Q_NULLPTR)
         << QApplication::translate("edit", "\347\226\253\350\213\227\345\256\232\347\202\271\345\214\273\351\231\242", Q_NULLPTR)
         << QApplication::translate("edit", "\346\240\270\351\205\270\346\243\200\346\265\213\344\270\232\345\212\241\347\261\273\345\236\213", Q_NULLPTR)
         << QApplication::translate("edit", "\347\226\253\350\213\227\347\261\273\345\236\213", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("edit", "\351\200\211\346\213\251\346\223\215\344\275\234", Q_NULLPTR));
        choose_op->clear();
        choose_op->insertItems(0, QStringList()
         << QApplication::translate("edit", "\346\237\245\347\234\213", Q_NULLPTR)
         << QApplication::translate("edit", "\345\242\236\345\212\240", Q_NULLPTR)
         << QApplication::translate("edit", "\345\210\240\351\231\244", Q_NULLPTR)
         << QApplication::translate("edit", "\344\277\256\346\224\271", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("edit", "\347\241\256\345\256\232", Q_NULLPTR));
        add_lb->setText(QApplication::translate("edit", "\350\257\267\350\276\223\345\205\245\344\270\200\347\273\204\346\225\260\346\215\256", Q_NULLPTR));
        add_btn->setText(QApplication::translate("edit", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
