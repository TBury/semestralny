/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_14;
    QLabel *price_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *label_15;
    QFrame *frame_5;
    QLabel *label_20;
    QLabel *from;
    QLabel *to;
    QLabel *date_from;
    QLabel *date_to;
    QLabel *price;
    QLabel *label_4;
    QLabel *label_3;
    QFrame *frame_6;
    QFrame *frame_7;
    QLabel *label_22;
    QLabel *paid;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->resize(800, 600);
        frame = new QFrame(payment);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 210, 291, 121));
        frame->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 291, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 10, 151, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: white;"));
        price_2 = new QLabel(frame);
        price_2->setObjectName(QString::fromUtf8("price_2"));
        price_2->setGeometry(QRect(30, 70, 91, 20));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        price_2->setFont(font1);
        price_2->setStyleSheet(QString::fromUtf8("color: white;"));
        frame_3 = new QFrame(payment);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 370, 801, 181));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 801, 41));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(frame_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 10, 121, 20));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: white;"));
        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 140, 801, 41));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 10, 211, 20));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("color: white;"));
        from = new QLabel(frame_3);
        from->setObjectName(QString::fromUtf8("from"));
        from->setGeometry(QRect(30, 70, 221, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        from->setFont(font2);
        from->setStyleSheet(QString::fromUtf8("color: white;"));
        to = new QLabel(frame_3);
        to->setObjectName(QString::fromUtf8("to"));
        to->setGeometry(QRect(30, 100, 231, 20));
        to->setFont(font2);
        to->setStyleSheet(QString::fromUtf8("color: white;"));
        date_from = new QLabel(frame_3);
        date_from->setObjectName(QString::fromUtf8("date_from"));
        date_from->setGeometry(QRect(270, 70, 161, 16));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        date_from->setFont(font3);
        date_from->setStyleSheet(QString::fromUtf8("color: white;"));
        date_to = new QLabel(frame_3);
        date_to->setObjectName(QString::fromUtf8("date_to"));
        date_to->setGeometry(QRect(270, 90, 121, 16));
        date_to->setFont(font3);
        date_to->setStyleSheet(QString::fromUtf8("color: white;"));
        price = new QLabel(frame_3);
        price->setObjectName(QString::fromUtf8("price"));
        price->setGeometry(QRect(640, 80, 101, 31));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        price->setFont(font4);
        price->setStyleSheet(QString::fromUtf8("color: white;"));
        label_4 = new QLabel(payment);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 391, 41));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(false);
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(payment);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        frame_6 = new QFrame(payment);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(380, 210, 291, 121));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(0, 0, 291, 41));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_22 = new QLabel(frame_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(30, 10, 151, 20));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("color: white;"));
        paid = new QLabel(frame_6);
        paid->setObjectName(QString::fromUtf8("paid"));
        paid->setGeometry(QRect(30, 70, 91, 20));
        paid->setFont(font1);
        paid->setStyleSheet(QString::fromUtf8("color: white;"));
        label = new QLabel(payment);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 221, 51));
        QFont font6;
        font6.setBold(true);
        label->setFont(font6);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));
        line = new QFrame(payment);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        frame->raise();
        frame_3->raise();
        label_4->raise();
        label_3->raise();
        frame_6->raise();
        line->raise();
        label->raise();

        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QDialog *payment)
    {
        payment->setWindowTitle(QCoreApplication::translate("payment", "Dialog", nullptr));
        label_14->setText(QCoreApplication::translate("payment", "Pozosta\305\202o do zap\305\202aty", nullptr));
        price_2->setText(QCoreApplication::translate("payment", "34.22 z\305\202", nullptr));
        label_15->setText(QCoreApplication::translate("payment", "Bilet jednorazowy", nullptr));
        label_20->setText(QCoreApplication::translate("payment", "Klasa 2, przejazd TAM (przedzia\305\202)", nullptr));
        from->setText(QCoreApplication::translate("payment", "od: Gliwice", nullptr));
        to->setText(QCoreApplication::translate("payment", "do: Warszawa Centralna", nullptr));
        date_from->setText(QCoreApplication::translate("payment", "Wa\305\274ny od 19.01.2022 13:50", nullptr));
        date_to->setText(QCoreApplication::translate("payment", "do 19.01.2022 13:50", nullptr));
        price->setText(QCoreApplication::translate("payment", "34.22 z\305\202", nullptr));
        label_4->setText(QCoreApplication::translate("payment", "W\305\202\303\263\305\274 monety do otworu na monety, znajduj\304\205cego si\304\231 po prawej stronie\n"
"ekranu. Otw\303\263r na banknoty znajduje si\304\231 poni\305\274ej terminala p\305\202atniczego.", nullptr));
        label_3->setText(QCoreApplication::translate("payment", "P\305\202atno\305\233\304\207 got\303\263wk\304\205", nullptr));
        label_22->setText(QCoreApplication::translate("payment", "Wp\305\202acono", nullptr));
        paid->setText(QString());
        label->setText(QCoreApplication::translate("payment", "TrainTicketer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
