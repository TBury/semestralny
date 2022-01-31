/********************************************************************************
** Form generated from reading UI file 'show_ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_TICKET_H
#define UI_SHOW_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_14;
    QFrame *frame_3;
    QLabel *label_20;
    QLabel *label_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_4;
    QLabel *label_21;
    QLabel *label_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #D9DAD7;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 271, 51));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 160, 801, 211));
        frame->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 801, 41));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 10, 121, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Open Sans")});
        font1.setPointSize(10);
        font1.setBold(true);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: white;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 170, 801, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #AA3A1B;\n"
"width: 750px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 10, 211, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("color: white;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 81, 20));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 100, 191, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Open Sans")});
        font4.setPointSize(12);
        font4.setBold(false);
        label_15->setFont(font4);
        label_15->setStyleSheet(QString::fromUtf8("color: white;"));
        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(270, 70, 161, 16));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        label_16->setFont(font5);
        label_16->setStyleSheet(QString::fromUtf8("color: white;"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 90, 121, 16));
        label_17->setFont(font5);
        label_17->setStyleSheet(QString::fromUtf8("color: white;"));
        label_18 = new QLabel(frame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(490, 80, 51, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Open Sans")});
        font6.setPointSize(11);
        font6.setBold(true);
        label_18->setFont(font6);
        label_18->setStyleSheet(QString::fromUtf8("color: white;"));
        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(640, 80, 101, 21));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Open Sans")});
        font7.setPointSize(20);
        font7.setBold(true);
        label_19->setFont(font7);
        label_19->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 390, 171, 61));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 390, 171, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 390, 171, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(550, 480, 221, 80));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: #C4C4C4;\n"
"color: black;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_21 = new QLabel(frame_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(80, 10, 71, 20));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Open Sans")});
        font8.setPointSize(8);
        font8.setBold(false);
        label_21->setFont(font8);
        label_22 = new QLabel(frame_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(80, 40, 61, 20));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Open Sans")});
        font9.setPointSize(12);
        font9.setBold(true);
        label_22->setFont(font9);
        MainWindow->setCentralWidget(centralwidget);
        line->raise();
        label->raise();
        label_3->raise();
        frame->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        frame_4->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TrainTicketer", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Szczeg\303\263\305\202y biletu", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Bilet jednorazowy", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Klasa 2, przejazd TAM (przedzia\305\202)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "od: Gliwice", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "do: Warszawa Centralna", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Wa\305\274ny od 19.01.2022 13:50", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "do 19.01.2022 13:50", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "IC5320", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "34.22 z\305\202", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Got\303\263wka", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "BLIK", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "P\305\202atno\305\233\304\207 kart\304\205", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Do zap\305\202aty", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "34.32 z\305\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_TICKET_H
