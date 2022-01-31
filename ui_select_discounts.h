/********************************************************************************
** Form generated from reading UI file 'select_discounts.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_DISCOUNTS_H
#define UI_SELECT_DISCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_select_discounts
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_14;
    QLabel *label_15;
    QSpinBox *normalTicket;
    QSpinBox *studentTicket;
    QLabel *label_16;
    QLabel *label_17;
    QSpinBox *childTicket;
    QLabel *label_18;
    QSpinBox *bikeTicket;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *select_discounts)
    {
        if (select_discounts->objectName().isEmpty())
            select_discounts->setObjectName(QString::fromUtf8("select_discounts"));
        select_discounts->resize(800, 600);
        frame = new QFrame(select_discounts);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 160, 751, 371));
        frame->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 751, 61));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 20, 261, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: white;"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 80, 151, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_15->setFont(font1);
        label_15->setStyleSheet(QString::fromUtf8("color: white;"));
        normalTicket = new QSpinBox(frame);
        normalTicket->setObjectName(QString::fromUtf8("normalTicket"));
        normalTicket->setGeometry(QRect(200, 87, 141, 22));
        studentTicket = new QSpinBox(frame);
        studentTicket->setObjectName(QString::fromUtf8("studentTicket"));
        studentTicket->setGeometry(QRect(200, 130, 141, 22));
        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 125, 151, 31));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color: white;"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 170, 151, 31));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("color: white;"));
        childTicket = new QSpinBox(frame);
        childTicket->setObjectName(QString::fromUtf8("childTicket"));
        childTicket->setGeometry(QRect(200, 177, 141, 22));
        label_18 = new QLabel(frame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 213, 151, 31));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("color: white;"));
        bikeTicket = new QSpinBox(frame);
        bikeTicket->setObjectName(QString::fromUtf8("bikeTicket"));
        bikeTicket->setGeometry(QRect(200, 220, 141, 22));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 280, 171, 61));
        QFont font2;
        font2.setBold(true);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));
        label_3 = new QLabel(select_discounts);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        label = new QLabel(select_discounts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 271, 51));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));
        line = new QFrame(select_discounts);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        frame->raise();
        label_3->raise();
        line->raise();
        label->raise();

        retranslateUi(select_discounts);

        QMetaObject::connectSlotsByName(select_discounts);
    } // setupUi

    void retranslateUi(QDialog *select_discounts)
    {
        select_discounts->setWindowTitle(QCoreApplication::translate("select_discounts", "Dialog", nullptr));
        label_14->setText(QCoreApplication::translate("select_discounts", "Podaj liczb\304\231 bilet\303\263w dla ka\305\274dej kategorii:", nullptr));
        label_15->setText(QCoreApplication::translate("select_discounts", "Bilet normalny", nullptr));
        label_16->setText(QCoreApplication::translate("select_discounts", "Student/doktor", nullptr));
        label_17->setText(QCoreApplication::translate("select_discounts", "Dziecko/ucze\305\204", nullptr));
        label_18->setText(QCoreApplication::translate("select_discounts", "Przew\303\263z roweru", nullptr));
        pushButton_2->setText(QCoreApplication::translate("select_discounts", "Przejd\305\272 dalej", nullptr));
        label_3->setText(QCoreApplication::translate("select_discounts", "Ilo\305\233\304\207 bilet\303\263w i ulgi", nullptr));
        label->setText(QCoreApplication::translate("select_discounts", "TrainTicketer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class select_discounts: public Ui_select_discounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_DISCOUNTS_H
