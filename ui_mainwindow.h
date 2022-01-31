/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QLineEdit *startCity;
    QLineEdit *endCity;
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
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 110, 731, 421));
        frame->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 421, 61));
        label_2->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 24px;\n"
"font-weight: 700;\n"
"color: white;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(450, 10, 121, 61));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 24px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 101, 16));
        label_4->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 12px;\n"
"color: white;"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 170, 101, 16));
        label_5->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 12px;\n"
"color: white;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 280, 101, 16));
        label_6->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 12px;\n"
"color: white;"));
        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 310, 110, 22));
        QFont font1;
        font1.setPointSize(12);
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QString::fromUtf8("color: white;"));
        dateEdit->setMinimumDateTime(QDateTime(QDate(1752, 9, 26), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(false);
        dateEdit->setDate(QDate(2022, 1, 17));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(180, 280, 101, 16));
        label_7->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 12px;\n"
"color: white;"));
        timeEdit = new QTimeEdit(frame);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(180, 310, 118, 22));
        timeEdit->setFont(font1);
        timeEdit->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 350, 281, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;"));
        pushButton->setFlat(false);
        startCity = new QLineEdit(frame);
        startCity->setObjectName(QString::fromUtf8("startCity"));
        startCity->setGeometry(QRect(20, 120, 371, 41));
        startCity->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);\n"
"border: 0;"));
        endCity = new QLineEdit(frame);
        endCity->setObjectName(QString::fromUtf8("endCity"));
        endCity->setGeometry(QRect(20, 200, 371, 41));
        endCity->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);\n"
"border: 0;"));
        MainWindow->setCentralWidget(centralwidget);
        line->raise();
        label->raise();
        frame->raise();
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Kup sw\303\263j bilet kolejowy w mniej ni\305\274", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "2 minuty!", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Stacja pocz\304\205tkowa", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Stacja ko\305\204cowa", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Data odjazdu", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Godzina odjazdu", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sprawd\305\272 po\305\202\304\205czenia kolejowe >", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
