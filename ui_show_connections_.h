/********************************************************************************
** Form generated from reading UI file 'show_connections_.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_CONNECTIONS__H
#define UI_SHOW_CONNECTIONS__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *first_connection_2;
    QLabel *stacja_poczatkowa_3;
    QLabel *peron_5;
    QLabel *stacja_koncowa_3;
    QLabel *peron_6;
    QLabel *godzina_odjazdu_3;
    QLabel *label_12;
    QLabel *godzina_przyjazdu_3;
    QLabel *label_13;
    QLabel *numer_pociagu_3;
    QLabel *przewoznik_3;
    QLabel *relacja_3;
    QPushButton *pushButton_2;
    QFrame *connection_2;
    QLabel *stacja_poczatkowa_4;
    QLabel *peron_7;
    QLabel *stacja_koncowa_4;
    QLabel *peron_8;
    QLabel *godzina_odjazdu_4;
    QLabel *label_31;
    QLabel *godzina_przyjazdu_4;
    QLabel *label_33;
    QLabel *numer_pociagu_4;
    QLabel *przewoznik_4;
    QLabel *relacja_4;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label;
    QFrame *line;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::WindowModal);
        Dialog->resize(800, 600);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 150, 911, 431));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        first_connection_2 = new QFrame(verticalLayoutWidget);
        first_connection_2->setObjectName(QString::fromUtf8("first_connection_2"));
        first_connection_2->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;"));
        first_connection_2->setFrameShape(QFrame::StyledPanel);
        first_connection_2->setFrameShadow(QFrame::Raised);
        stacja_poczatkowa_3 = new QLabel(first_connection_2);
        stacja_poczatkowa_3->setObjectName(QString::fromUtf8("stacja_poczatkowa_3"));
        stacja_poczatkowa_3->setGeometry(QRect(30, 20, 71, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        stacja_poczatkowa_3->setFont(font);
        stacja_poczatkowa_3->setStyleSheet(QString::fromUtf8("color: white;"));
        peron_5 = new QLabel(first_connection_2);
        peron_5->setObjectName(QString::fromUtf8("peron_5"));
        peron_5->setGeometry(QRect(30, 49, 91, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        peron_5->setFont(font1);
        peron_5->setStyleSheet(QString::fromUtf8("color: white;"));
        stacja_koncowa_3 = new QLabel(first_connection_2);
        stacja_koncowa_3->setObjectName(QString::fromUtf8("stacja_koncowa_3"));
        stacja_koncowa_3->setGeometry(QRect(30, 94, 191, 16));
        stacja_koncowa_3->setFont(font);
        stacja_koncowa_3->setStyleSheet(QString::fromUtf8("color: white;"));
        peron_6 = new QLabel(first_connection_2);
        peron_6->setObjectName(QString::fromUtf8("peron_6"));
        peron_6->setGeometry(QRect(30, 119, 91, 16));
        peron_6->setFont(font1);
        peron_6->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_odjazdu_3 = new QLabel(first_connection_2);
        godzina_odjazdu_3->setObjectName(QString::fromUtf8("godzina_odjazdu_3"));
        godzina_odjazdu_3->setGeometry(QRect(290, 50, 71, 21));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        godzina_odjazdu_3->setFont(font2);
        godzina_odjazdu_3->setStyleSheet(QString::fromUtf8("color: white;"));
        label_12 = new QLabel(first_connection_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(290, 20, 41, 16));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_przyjazdu_3 = new QLabel(first_connection_2);
        godzina_przyjazdu_3->setObjectName(QString::fromUtf8("godzina_przyjazdu_3"));
        godzina_przyjazdu_3->setGeometry(QRect(290, 120, 71, 21));
        godzina_przyjazdu_3->setFont(font2);
        godzina_przyjazdu_3->setStyleSheet(QString::fromUtf8("color: white;"));
        label_13 = new QLabel(first_connection_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(290, 90, 51, 16));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color: white;"));
        numer_pociagu_3 = new QLabel(first_connection_2);
        numer_pociagu_3->setObjectName(QString::fromUtf8("numer_pociagu_3"));
        numer_pociagu_3->setGeometry(QRect(464, 60, 61, 21));
        numer_pociagu_3->setFont(font);
        numer_pociagu_3->setStyleSheet(QString::fromUtf8("color: white;"));
        przewoznik_3 = new QLabel(first_connection_2);
        przewoznik_3->setObjectName(QString::fromUtf8("przewoznik_3"));
        przewoznik_3->setGeometry(QRect(460, 40, 71, 16));
        przewoznik_3->setFont(font1);
        przewoznik_3->setStyleSheet(QString::fromUtf8("color: white;"));
        relacja_3 = new QLabel(first_connection_2);
        relacja_3->setObjectName(QString::fromUtf8("relacja_3"));
        relacja_3->setGeometry(QRect(410, 90, 181, 16));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        relacja_3->setFont(font3);
        relacja_3->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton_2 = new QPushButton(first_connection_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 50, 171, 61));
        QFont font4;
        font4.setBold(true);
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(first_connection_2);

        connection_2 = new QFrame(verticalLayoutWidget);
        connection_2->setObjectName(QString::fromUtf8("connection_2"));
        connection_2->setStyleSheet(QString::fromUtf8("color: #C24D2C;\n"
"background-color: white;"));
        connection_2->setFrameShape(QFrame::StyledPanel);
        connection_2->setFrameShadow(QFrame::Raised);
        stacja_poczatkowa_4 = new QLabel(connection_2);
        stacja_poczatkowa_4->setObjectName(QString::fromUtf8("stacja_poczatkowa_4"));
        stacja_poczatkowa_4->setGeometry(QRect(30, 20, 71, 20));
        stacja_poczatkowa_4->setFont(font);
        peron_7 = new QLabel(connection_2);
        peron_7->setObjectName(QString::fromUtf8("peron_7"));
        peron_7->setGeometry(QRect(30, 49, 91, 16));
        peron_7->setFont(font1);
        stacja_koncowa_4 = new QLabel(connection_2);
        stacja_koncowa_4->setObjectName(QString::fromUtf8("stacja_koncowa_4"));
        stacja_koncowa_4->setGeometry(QRect(30, 94, 191, 16));
        stacja_koncowa_4->setFont(font);
        peron_8 = new QLabel(connection_2);
        peron_8->setObjectName(QString::fromUtf8("peron_8"));
        peron_8->setGeometry(QRect(30, 119, 91, 16));
        peron_8->setFont(font1);
        godzina_odjazdu_4 = new QLabel(connection_2);
        godzina_odjazdu_4->setObjectName(QString::fromUtf8("godzina_odjazdu_4"));
        godzina_odjazdu_4->setGeometry(QRect(290, 50, 71, 21));
        godzina_odjazdu_4->setFont(font2);
        label_31 = new QLabel(connection_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(290, 20, 41, 16));
        label_31->setFont(font1);
        godzina_przyjazdu_4 = new QLabel(connection_2);
        godzina_przyjazdu_4->setObjectName(QString::fromUtf8("godzina_przyjazdu_4"));
        godzina_przyjazdu_4->setGeometry(QRect(290, 120, 71, 21));
        godzina_przyjazdu_4->setFont(font2);
        label_33 = new QLabel(connection_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(290, 90, 51, 16));
        label_33->setFont(font1);
        numer_pociagu_4 = new QLabel(connection_2);
        numer_pociagu_4->setObjectName(QString::fromUtf8("numer_pociagu_4"));
        numer_pociagu_4->setGeometry(QRect(464, 60, 61, 21));
        numer_pociagu_4->setFont(font);
        przewoznik_4 = new QLabel(connection_2);
        przewoznik_4->setObjectName(QString::fromUtf8("przewoznik_4"));
        przewoznik_4->setGeometry(QRect(460, 40, 71, 16));
        przewoznik_4->setFont(font1);
        relacja_4 = new QLabel(connection_2);
        relacja_4->setObjectName(QString::fromUtf8("relacja_4"));
        relacja_4->setGeometry(QRect(410, 90, 181, 16));
        relacja_4->setFont(font3);
        pushButton_4 = new QPushButton(connection_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 50, 171, 61));
        pushButton_4->setFont(font4);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));

        verticalLayout_2->addWidget(connection_2);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 271, 51));
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget->raise();
        label_3->raise();
        line->raise();
        label->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        stacja_poczatkowa_3->setText(QCoreApplication::translate("Dialog", "Gliwice", nullptr));
        peron_5->setText(QCoreApplication::translate("Dialog", "Peron 1, tor 19", nullptr));
        stacja_koncowa_3->setText(QCoreApplication::translate("Dialog", "Warszawa Centralna", nullptr));
        peron_6->setText(QCoreApplication::translate("Dialog", "Peron 1, tor 19", nullptr));
        godzina_odjazdu_3->setText(QCoreApplication::translate("Dialog", "13:30", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "Odjazd", nullptr));
        godzina_przyjazdu_3->setText(QCoreApplication::translate("Dialog", "14:30", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "Przyjazd", nullptr));
        numer_pociagu_3->setText(QCoreApplication::translate("Dialog", "IC5320", nullptr));
        przewoznik_3->setText(QCoreApplication::translate("Dialog", "PKP Intercity", nullptr));
        relacja_3->setText(QCoreApplication::translate("Dialog", "Gdynia G\305\202\303\263wna - Krak\303\263w Gl\303\263wny", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Kup bilet", nullptr));
        stacja_poczatkowa_4->setText(QCoreApplication::translate("Dialog", "Gliwice", nullptr));
        peron_7->setText(QCoreApplication::translate("Dialog", "Peron 1, tor 19", nullptr));
        stacja_koncowa_4->setText(QCoreApplication::translate("Dialog", "Warszawa Centralna", nullptr));
        peron_8->setText(QCoreApplication::translate("Dialog", "Peron 1, tor 19", nullptr));
        godzina_odjazdu_4->setText(QCoreApplication::translate("Dialog", "13:30", nullptr));
        label_31->setText(QCoreApplication::translate("Dialog", "Odjazd", nullptr));
        godzina_przyjazdu_4->setText(QCoreApplication::translate("Dialog", "14:30", nullptr));
        label_33->setText(QCoreApplication::translate("Dialog", "Przyjazd", nullptr));
        numer_pociagu_4->setText(QCoreApplication::translate("Dialog", "IC5320", nullptr));
        przewoznik_4->setText(QCoreApplication::translate("Dialog", "PKP Intercity", nullptr));
        relacja_4->setText(QCoreApplication::translate("Dialog", "Gdynia G\305\202\303\263wna - Krak\303\263w Gl\303\263wny", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Kup bilet", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Lista po\305\202\304\205cze\305\204", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TrainTicketer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_CONNECTIONS__H
