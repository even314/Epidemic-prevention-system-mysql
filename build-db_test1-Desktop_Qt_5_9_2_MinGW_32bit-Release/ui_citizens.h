/********************************************************************************
** Form generated from reading UI file 'citizens.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITIZENS_H
#define UI_CITIZENS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_citizens
{
public:
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *health_code;
    QPushButton *risk_region_inside_a;
    QPushButton *risk_region_ouside_A;
    QPushButton *is_key_range;
    QFrame *frame_2;
    QPushButton *vaccine_appointment;
    QPushButton *test_appiontment;
    QFrame *frame_3;
    QPushButton *test_result;
    QPushButton *vaccine_result;
    QPushButton *back;
    QPushButton *in_id;
    QLabel *label;

    void setupUi(QWidget *citizens)
    {
        if (citizens->objectName().isEmpty())
            citizens->setObjectName(QStringLiteral("citizens"));
        citizens->resize(934, 383);
        citizens->setMinimumSize(QSize(934, 383));
        frame = new QFrame(citizens);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 70, 861, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 10, 241, 190));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        health_code = new QPushButton(verticalLayoutWidget);
        health_code->setObjectName(QStringLiteral("health_code"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(health_code->sizePolicy().hasHeightForWidth());
        health_code->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        health_code->setFont(font);

        verticalLayout->addWidget(health_code);

        risk_region_inside_a = new QPushButton(verticalLayoutWidget);
        risk_region_inside_a->setObjectName(QStringLiteral("risk_region_inside_a"));
        sizePolicy.setHeightForWidth(risk_region_inside_a->sizePolicy().hasHeightForWidth());
        risk_region_inside_a->setSizePolicy(sizePolicy);
        risk_region_inside_a->setFont(font);

        verticalLayout->addWidget(risk_region_inside_a);

        risk_region_ouside_A = new QPushButton(verticalLayoutWidget);
        risk_region_ouside_A->setObjectName(QStringLiteral("risk_region_ouside_A"));
        sizePolicy.setHeightForWidth(risk_region_ouside_A->sizePolicy().hasHeightForWidth());
        risk_region_ouside_A->setSizePolicy(sizePolicy);
        risk_region_ouside_A->setFont(font);

        verticalLayout->addWidget(risk_region_ouside_A);

        is_key_range = new QPushButton(frame);
        is_key_range->setObjectName(QStringLiteral("is_key_range"));
        is_key_range->setGeometry(QRect(40, 230, 471, 44));
        sizePolicy.setHeightForWidth(is_key_range->sizePolicy().hasHeightForWidth());
        is_key_range->setSizePolicy(sizePolicy);
        is_key_range->setFont(font);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(310, 10, 221, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        vaccine_appointment = new QPushButton(frame_2);
        vaccine_appointment->setObjectName(QStringLiteral("vaccine_appointment"));
        vaccine_appointment->setGeometry(QRect(0, 0, 221, 81));
        sizePolicy.setHeightForWidth(vaccine_appointment->sizePolicy().hasHeightForWidth());
        vaccine_appointment->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        vaccine_appointment->setFont(font1);
        test_appiontment = new QPushButton(frame_2);
        test_appiontment->setObjectName(QStringLiteral("test_appiontment"));
        test_appiontment->setGeometry(QRect(0, 100, 221, 81));
        sizePolicy.setHeightForWidth(test_appiontment->sizePolicy().hasHeightForWidth());
        test_appiontment->setSizePolicy(sizePolicy);
        test_appiontment->setFont(font1);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(560, 10, 271, 201));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        test_result = new QPushButton(frame_3);
        test_result->setObjectName(QStringLiteral("test_result"));
        test_result->setGeometry(QRect(0, 0, 271, 81));
        sizePolicy.setHeightForWidth(test_result->sizePolicy().hasHeightForWidth());
        test_result->setSizePolicy(sizePolicy);
        test_result->setFont(font1);
        vaccine_result = new QPushButton(frame_3);
        vaccine_result->setObjectName(QStringLiteral("vaccine_result"));
        vaccine_result->setGeometry(QRect(0, 100, 271, 81));
        sizePolicy.setHeightForWidth(vaccine_result->sizePolicy().hasHeightForWidth());
        vaccine_result->setSizePolicy(sizePolicy);
        vaccine_result->setFont(font1);
        back = new QPushButton(citizens);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(40, 10, 111, 31));
        in_id = new QPushButton(citizens);
        in_id->setObjectName(QStringLiteral("in_id"));
        in_id->setGeometry(QRect(430, 10, 191, 31));
        label = new QLabel(citizens);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 70, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(70, 30));
        label->setMaximumSize(QSize(70, 30));
        QFont font2;
        font2.setPointSize(18);
        label->setFont(font2);

        retranslateUi(citizens);

        QMetaObject::connectSlotsByName(citizens);
    } // setupUi

    void retranslateUi(QWidget *citizens)
    {
        citizens->setWindowTitle(QApplication::translate("citizens", "\345\270\202\346\260\221\346\234\215\345\212\241", Q_NULLPTR));
        health_code->setText(QApplication::translate("citizens", "\345\201\245\345\272\267\347\240\201", Q_NULLPTR));
        risk_region_inside_a->setText(QApplication::translate("citizens", "\345\270\202\345\206\205\351\243\216\351\231\251\345\214\272", Q_NULLPTR));
        risk_region_ouside_A->setText(QApplication::translate("citizens", "\345\220\204\345\234\260\351\243\216\351\231\251\345\214\272", Q_NULLPTR));
        is_key_range->setText(QApplication::translate("citizens", "14\345\244\251\345\206\205\346\230\257\345\220\246\345\210\260\350\277\207\351\243\216\351\231\251\345\214\272", Q_NULLPTR));
        vaccine_appointment->setText(QApplication::translate("citizens", "\351\242\204\347\272\246\347\226\253\350\213\227\346\216\245\347\247\215", Q_NULLPTR));
        test_appiontment->setText(QApplication::translate("citizens", "\351\242\204\347\272\246\346\240\270\351\205\270\346\243\200\346\265\213", Q_NULLPTR));
        test_result->setText(QApplication::translate("citizens", "\346\237\245\347\234\213\346\240\270\351\205\270\346\243\200\346\265\213\347\273\223\346\236\234", Q_NULLPTR));
        vaccine_result->setText(QApplication::translate("citizens", "\346\237\245\347\234\213\347\226\253\350\213\227\346\216\245\347\247\215\347\273\223\346\236\234", Q_NULLPTR));
        back->setText(QApplication::translate("citizens", "\350\277\224\345\233\236", Q_NULLPTR));
        in_id->setText(QApplication::translate("citizens", "\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label->setText(QApplication::translate("citizens", "\345\270\202\346\260\221\347\253\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class citizens: public Ui_citizens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITIZENS_H
