/********************************************************************************
** Form generated from reading UI file 'statics.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATICS_H
#define UI_STATICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statics
{
public:
    QPushButton *back;
    QPushButton *positive;
    QPushButton *locked_down_citizens;
    QPushButton *key_citizens;
    QLabel *label;

    void setupUi(QWidget *statics)
    {
        if (statics->objectName().isEmpty())
            statics->setObjectName(QStringLiteral("statics"));
        statics->resize(499, 366);
        back = new QPushButton(statics);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(20, 20, 71, 31));
        positive = new QPushButton(statics);
        positive->setObjectName(QStringLiteral("positive"));
        positive->setGeometry(QRect(40, 80, 421, 31));
        locked_down_citizens = new QPushButton(statics);
        locked_down_citizens->setObjectName(QStringLiteral("locked_down_citizens"));
        locked_down_citizens->setGeometry(QRect(40, 160, 421, 31));
        key_citizens = new QPushButton(statics);
        key_citizens->setObjectName(QStringLiteral("key_citizens"));
        key_citizens->setGeometry(QRect(40, 230, 421, 31));
        label = new QLabel(statics);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 310, 311, 41));

        retranslateUi(statics);

        QMetaObject::connectSlotsByName(statics);
    } // setupUi

    void retranslateUi(QWidget *statics)
    {
        statics->setWindowTitle(QApplication::translate("statics", "\347\256\241\347\220\206\344\272\272\345\221\230\347\273\237\350\256\241", Q_NULLPTR));
        back->setText(QApplication::translate("statics", "\350\277\224\345\233\236", Q_NULLPTR));
        positive->setText(QApplication::translate("statics", "\345\275\223\346\227\245\346\226\260\345\242\236\351\230\263\346\200\247\346\241\210\344\276\213", Q_NULLPTR));
        locked_down_citizens->setText(QApplication::translate("statics", "\345\260\201\346\216\247\345\214\272\345\261\205\346\260\221\344\277\241\346\201\257", Q_NULLPTR));
        key_citizens->setText(QApplication::translate("statics", "14\345\244\251\345\206\205\351\200\224\345\276\204\351\207\215\347\202\271\345\234\260\345\214\272\344\272\272\345\221\230\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("statics", "\346\233\264\345\244\232\345\212\237\350\203\275\345\276\205\345\274\200\345\217\221...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class statics: public Ui_statics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATICS_H
