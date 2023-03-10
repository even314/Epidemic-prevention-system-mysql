/********************************************************************************
** Form generated from reading UI file 'showdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDIALOG_H
#define UI_SHOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_showdialog
{
public:
    QDialogButtonBox *buttonBox;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *showdialog)
    {
        if (showdialog->objectName().isEmpty())
            showdialog->setObjectName(QStringLiteral("showdialog"));
        showdialog->resize(648, 300);
        buttonBox = new QDialogButtonBox(showdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(80, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableWidget = new QTableWidget(showdialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 80, 571, 151));
        pushButton = new QPushButton(showdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 20, 131, 31));

        retranslateUi(showdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), showdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), showdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(showdialog);
    } // setupUi

    void retranslateUi(QDialog *showdialog)
    {
        showdialog->setWindowTitle(QApplication::translate("showdialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("showdialog", "\346\230\276\347\244\272\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class showdialog: public Ui_showdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDIALOG_H
