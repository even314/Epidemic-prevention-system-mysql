/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QLabel *title_label;
    QPushButton *edit_data;
    QPushButton *statistic;
    QPushButton *back;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QStringLiteral("manager"));
        manager->resize(500, 300);
        manager->setMinimumSize(QSize(500, 300));
        title_label = new QLabel(manager);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(110, 10, 91, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        title_label->setFont(font);
        title_label->setLayoutDirection(Qt::LeftToRight);
        title_label->setAlignment(Qt::AlignCenter);
        edit_data = new QPushButton(manager);
        edit_data->setObjectName(QStringLiteral("edit_data"));
        edit_data->setGeometry(QRect(60, 80, 371, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(edit_data->sizePolicy().hasHeightForWidth());
        edit_data->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        edit_data->setFont(font1);
        statistic = new QPushButton(manager);
        statistic->setObjectName(QStringLiteral("statistic"));
        statistic->setGeometry(QRect(60, 200, 371, 71));
        sizePolicy.setHeightForWidth(statistic->sizePolicy().hasHeightForWidth());
        statistic->setSizePolicy(sizePolicy);
        statistic->setFont(font1);
        back = new QPushButton(manager);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(10, 10, 80, 31));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QApplication::translate("manager", "\347\226\276\346\216\247\347\256\241\347\220\206\347\253\257", Q_NULLPTR));
        title_label->setText(QApplication::translate("manager", "\347\256\241\347\220\206\347\253\257", Q_NULLPTR));
        edit_data->setText(QApplication::translate("manager", "\347\256\241\347\220\206\343\200\201\346\233\264\346\226\260\346\225\260\346\215\256", Q_NULLPTR));
        statistic->setText(QApplication::translate("manager", "\347\273\237\350\256\241\346\225\260\346\215\256", Q_NULLPTR));
        back->setText(QApplication::translate("manager", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
