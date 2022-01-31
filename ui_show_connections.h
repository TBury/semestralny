/********************************************************************************
** Form generated from reading UI file 'show_connections.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_CONNECTIONS_H
#define UI_SHOW_CONNECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *first_connection;
    QLabel *stacja_poczatkowa;
    QLabel *peron;
    QLabel *stacja_koncowa;
    QLabel *peron_2;
    QLabel *godzina_odjazdu;
    QLabel *label_10;
    QLabel *godzina_przyjazdu;
    QLabel *label_11;
    QLabel *numer_pociagu;
    QLabel *przewoznik;
    QLabel *relacja;
    QPushButton *pushButton;
    QFrame *connection;
    QLabel *stacja_poczatkowa_2;
    QLabel *peron_3;
    QLabel *stacja_koncowa_2;
    QLabel *peron_4;
    QLabel *godzina_odjazdu_2;
    QLabel *label_30;
    QLabel *godzina_przyjazdu_2;
    QLabel *label_32;
    QLabel *numer_pociagu_2;
    QLabel *przewoznik_2;
    QLabel *relacja_2;
    QPushButton *pushButton_3;
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
        label_3->setGeometry(QRect(30, 110, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 150, 911, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        first_connection = new QFrame(verticalLayoutWidget);
        first_connection->setObjectName(QString::fromUtf8("first_connection"));
        first_connection->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        first_connection->setFrameShape(QFrame::StyledPanel);
        first_connection->setFrameShadow(QFrame::Raised);
        stacja_poczatkowa = new QLabel(first_connection);
        stacja_poczatkowa->setObjectName(QString::fromUtf8("stacja_poczatkowa"));
        stacja_poczatkowa->setGeometry(QRect(30, 20, 71, 20));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        stacja_poczatkowa->setFont(font1);
        stacja_poczatkowa->setStyleSheet(QString::fromUtf8("color: white;"));
        peron = new QLabel(first_connection);
        peron->setObjectName(QString::fromUtf8("peron"));
        peron->setGeometry(QRect(30, 49, 91, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        peron->setFont(font2);
        peron->setStyleSheet(QString::fromUtf8("color: white;"));
        stacja_koncowa = new QLabel(first_connection);
        stacja_koncowa->setObjectName(QString::fromUtf8("stacja_koncowa"));
        stacja_koncowa->setGeometry(QRect(30, 94, 191, 16));
        stacja_koncowa->setFont(font1);
        stacja_koncowa->setStyleSheet(QString::fromUtf8("color: white;"));
        peron_2 = new QLabel(first_connection);
        peron_2->setObjectName(QString::fromUtf8("peron_2"));
        peron_2->setGeometry(QRect(30, 119, 91, 16));
        peron_2->setFont(font2);
        peron_2->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_odjazdu = new QLabel(first_connection);
        godzina_odjazdu->setObjectName(QString::fromUtf8("godzina_odjazdu"));
        godzina_odjazdu->setGeometry(QRect(290, 50, 71, 21));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        godzina_odjazdu->setFont(font3);
        godzina_odjazdu->setStyleSheet(QString::fromUtf8("color: white;"));
        label_10 = new QLabel(first_connection);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(290, 20, 41, 16));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_przyjazdu = new QLabel(first_connection);
        godzina_przyjazdu->setObjectName(QString::fromUtf8("godzina_przyjazdu"));
        godzina_przyjazdu->setGeometry(QRect(290, 120, 71, 21));
        godzina_przyjazdu->setFont(font3);
        godzina_przyjazdu->setStyleSheet(QString::fromUtf8("color: white;"));
        label_11 = new QLabel(first_connection);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(290, 90, 51, 16));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: white;"));
        numer_pociagu = new QLabel(first_connection);
        numer_pociagu->setObjectName(QString::fromUtf8("numer_pociagu"));
        numer_pociagu->setGeometry(QRect(464, 60, 61, 21));
        numer_pociagu->setFont(font1);
        numer_pociagu->setStyleSheet(QString::fromUtf8("color: white;"));
        przewoznik = new QLabel(first_connection);
        przewoznik->setObjectName(QString::fromUtf8("przewoznik"));
        przewoznik->setGeometry(QRect(460, 40, 71, 16));
        przewoznik->setFont(font2);
        przewoznik->setStyleSheet(QString::fromUtf8("color: white;"));
        relacja = new QLabel(first_connection);
        relacja->setObjectName(QString::fromUtf8("relacja"));
        relacja->setGeometry(QRect(410, 90, 181, 16));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(false);
        relacja->setFont(font4);
        relacja->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton = new QPushButton(first_connection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 50, 171, 61));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));

        verticalLayout->addWidget(first_connection);

        connection = new QFrame(verticalLayoutWidget);
        connection->setObjectName(QString::fromUtf8("connection"));
        connection->setStyleSheet(QString::fromUtf8("color: #C24D2C;\n"
"background-color: white;"));
        connection->setFrameShape(QFrame::StyledPanel);
        connection->setFrameShadow(QFrame::Raised);
        stacja_poczatkowa_2 = new QLabel(connection);
        stacja_poczatkowa_2->setObjectName(QString::fromUtf8("stacja_poczatkowa_2"));
        stacja_poczatkowa_2->setGeometry(QRect(30, 20, 71, 20));
        stacja_poczatkowa_2->setFont(font1);
        peron_3 = new QLabel(connection);
        peron_3->setObjectName(QString::fromUtf8("peron_3"));
        peron_3->setGeometry(QRect(30, 49, 91, 16));
        peron_3->setFont(font2);
        stacja_koncowa_2 = new QLabel(connection);
        stacja_koncowa_2->setObjectName(QString::fromUtf8("stacja_koncowa_2"));
        stacja_koncowa_2->setGeometry(QRect(30, 94, 191, 16));
        stacja_koncowa_2->setFont(font1);
        peron_4 = new QLabel(connection);
        peron_4->setObjectName(QString::fromUtf8("peron_4"));
        peron_4->setGeometry(QRect(30, 119, 91, 16));
        peron_4->setFont(font2);
        godzina_odjazdu_2 = new QLabel(connection);
        godzina_odjazdu_2->setObjectName(QString::fromUtf8("godzina_odjazdu_2"));
        godzina_odjazdu_2->setGeometry(QRect(290, 50, 71, 21));
        godzina_odjazdu_2->setFont(font3);
        label_30 = new QLabel(connection);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(290, 20, 41, 16));
        label_30->setFont(font2);
        godzina_przyjazdu_2 = new QLabel(connection);
        godzina_przyjazdu_2->setObjectName(QString::fromUtf8("godzina_przyjazdu_2"));
        godzina_przyjazdu_2->setGeometry(QRect(290, 120, 71, 21));
        godzina_przyjazdu_2->setFont(font3);
        label_32 = new QLabel(connection);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(290, 90, 51, 16));
        label_32->setFont(font2);
        numer_pociagu_2 = new QLabel(connection);
        numer_pociagu_2->setObjectName(QString::fromUtf8("numer_pociagu_2"));
        numer_pociagu_2->setGeometry(QRect(464, 60, 61, 21));
        numer_pociagu_2->setFont(font1);
        przewoznik_2 = new QLabel(connection);
        przewoznik_2->setObjectName(QString::fromUtf8("przewoznik_2"));
        przewoznik_2->setGeometry(QRect(460, 40, 71, 16));
        przewoznik_2->setFont(font2);
        relacja_2 = new QLabel(connection);
        relacja_2->setObjectName(QString::fromUtf8("relacja_2"));
        relacja_2->setGeometry(QRect(410, 90, 181, 16));
        relacja_2->setFont(font4);
        pushButton_3 = new QPushButton(connection);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 50, 171, 61));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));

        verticalLayout->addWidget(connection);

        MainWindow->setCentralWidget(centralwidget);
        line->raise();
        label->raise();
        label_3->raise();
        verticalLayoutWidget->raise();
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
        label_3->setText(QCoreApplication::translate("MainWindow", "Lista po\305\202\304\205cze\305\204", nullptr));
        stacja_poczatkowa->setText(QCoreApplication::translate("MainWindow", "Gliwice", nullptr));
        peron->setText(QCoreApplication::translate("MainWindow", "Peron 1, tor 19", nullptr));
        stacja_koncowa->setText(QCoreApplication::translate("MainWindow", "Warszawa Centralna", nullptr));
        peron_2->setText(QCoreApplication::translate("MainWindow", "Peron 1, tor 19", nullptr));
        godzina_odjazdu->setText(QCoreApplication::translate("MainWindow", "13:30", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Odjazd", nullptr));
        godzina_przyjazdu->setText(QCoreApplication::translate("MainWindow", "14:30", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Przyjazd", nullptr));
        numer_pociagu->setText(QCoreApplication::translate("MainWindow", "IC5320", nullptr));
        przewoznik->setText(QCoreApplication::translate("MainWindow", "PKP Intercity", nullptr));
        relacja->setText(QCoreApplication::translate("MainWindow", "Gdynia G\305\202\303\263wna - Krak\303\263w Gl\303\263wny", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Kup bilet", nullptr));
        stacja_poczatkowa_2->setText(QCoreApplication::translate("MainWindow", "Gliwice", nullptr));
        peron_3->setText(QCoreApplication::translate("MainWindow", "Peron 1, tor 19", nullptr));
        stacja_koncowa_2->setText(QCoreApplication::translate("MainWindow", "Warszawa Centralna", nullptr));
        peron_4->setText(QCoreApplication::translate("MainWindow", "Peron 1, tor 19", nullptr));
        godzina_odjazdu_2->setText(QCoreApplication::translate("MainWindow", "13:30", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Odjazd", nullptr));
        godzina_przyjazdu_2->setText(QCoreApplication::translate("MainWindow", "14:30", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Przyjazd", nullptr));
        numer_pociagu_2->setText(QCoreApplication::translate("MainWindow", "IC5320", nullptr));
        przewoznik_2->setText(QCoreApplication::translate("MainWindow", "PKP Intercity", nullptr));
        relacja_2->setText(QCoreApplication::translate("MainWindow", "Gdynia G\305\202\303\263wna - Krak\303\263w Gl\303\263wny", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Kup bilet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_CONNECTIONS_H
