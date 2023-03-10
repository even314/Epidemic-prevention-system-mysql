/********************************************************************************
** Form generated from reading UI file 'textdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTDIALOG_H
#define UI_TEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_textdialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *textdialog)
    {
        if (textdialog->objectName().isEmpty())
            textdialog->setObjectName(QStringLiteral("textdialog"));
        textdialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(textdialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(textdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 311, 31));
        lineEdit = new QLineEdit(textdialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 90, 311, 61));

        retranslateUi(textdialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), textdialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), textdialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(textdialog);
    } // setupUi

    void retranslateUi(QDialog *textdialog)
    {
        textdialog->setWindowTitle(QApplication::translate("textdialog", "\344\277\241\346\201\257\346\241\206", Q_NULLPTR));
        label->setText(QApplication::translate("textdialog", "\350\257\267\350\276\223\345\205\245\345\206\205\345\256\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class textdialog: public Ui_textdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTDIALOG_H
