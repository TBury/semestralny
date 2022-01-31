/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *first_connection_2;
    QLabel *stacja_poczatkowa_4;
    QLabel *stacja_koncowa_4;
    QLabel *godzina_odjazdu_4;
    QLabel *label_17;
    QLabel *godzina_przyjazdu_4;
    QLabel *label_18;
    QPushButton *pushButton_3;
    QLabel *label_19;
    QLabel *godzina_odjazdu_6;
    QLabel *label_20;
    QLabel *label_21;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 179);
        first_connection_2 = new QWidget(Dialog);
        first_connection_2->setObjectName(QString::fromUtf8("first_connection_2"));
        first_connection_2->setGeometry(QRect(0, 0, 800, 180));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(first_connection_2->sizePolicy().hasHeightForWidth());
        first_connection_2->setSizePolicy(sizePolicy);
        first_connection_2->setMaximumSize(QSize(16777215, 350));
        first_connection_2->setStyleSheet(QString::fromUtf8("background-color: #C24D2C;\n"
"width: 750px;\n"
"color: white;"));
        stacja_poczatkowa_4 = new QLabel(first_connection_2);
        stacja_poczatkowa_4->setObjectName(QString::fromUtf8("stacja_poczatkowa_4"));
        stacja_poczatkowa_4->setGeometry(QRect(30, 40, 71, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        stacja_poczatkowa_4->setFont(font);
        stacja_poczatkowa_4->setStyleSheet(QString::fromUtf8("color: white;"));
        stacja_koncowa_4 = new QLabel(first_connection_2);
        stacja_koncowa_4->setObjectName(QString::fromUtf8("stacja_koncowa_4"));
        stacja_koncowa_4->setGeometry(QRect(30, 120, 191, 16));
        stacja_koncowa_4->setFont(font);
        stacja_koncowa_4->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_odjazdu_4 = new QLabel(first_connection_2);
        godzina_odjazdu_4->setObjectName(QString::fromUtf8("godzina_odjazdu_4"));
        godzina_odjazdu_4->setGeometry(QRect(290, 50, 71, 21));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        godzina_odjazdu_4->setFont(font1);
        godzina_odjazdu_4->setStyleSheet(QString::fromUtf8("color: white;"));
        label_17 = new QLabel(first_connection_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(290, 20, 41, 16));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        label_17->setFont(font2);
        label_17->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_przyjazdu_4 = new QLabel(first_connection_2);
        godzina_przyjazdu_4->setObjectName(QString::fromUtf8("godzina_przyjazdu_4"));
        godzina_przyjazdu_4->setGeometry(QRect(290, 120, 71, 21));
        godzina_przyjazdu_4->setFont(font1);
        godzina_przyjazdu_4->setStyleSheet(QString::fromUtf8("color: white;"));
        label_18 = new QLabel(first_connection_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(290, 90, 51, 16));
        label_18->setFont(font2);
        label_18->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton_3 = new QPushButton(first_connection_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 50, 171, 61));
        QFont font3;
        font3.setBold(true);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #1A2639;\n"
"font-family: Open Sans;\n"
"font-size: 16px;\n"
"color: white;\n"
"border-radius: 15px;"));
        label_19 = new QLabel(first_connection_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(460, 50, 41, 16));
        label_19->setFont(font2);
        label_19->setStyleSheet(QString::fromUtf8("color: white;"));
        godzina_odjazdu_6 = new QLabel(first_connection_2);
        godzina_odjazdu_6->setObjectName(QString::fromUtf8("godzina_odjazdu_6"));
        godzina_odjazdu_6->setGeometry(QRect(460, 80, 71, 21));
        godzina_odjazdu_6->setFont(font1);
        godzina_odjazdu_6->setStyleSheet(QString::fromUtf8("color: white;"));
        label_20 = new QLabel(first_connection_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 20, 111, 16));
        label_20->setFont(font2);
        label_20->setStyleSheet(QString::fromUtf8("color: white;"));
        label_21 = new QLabel(first_connection_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(30, 96, 111, 16));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8("color: white;"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        stacja_poczatkowa_4->setText(QCoreApplication::translate("Dialog", "Gliwice", nullptr));
        stacja_koncowa_4->setText(QCoreApplication::translate("Dialog", "Warszawa Centralna", nullptr));
        godzina_odjazdu_4->setText(QCoreApplication::translate("Dialog", "13:30", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "Odjazd", nullptr));
        godzina_przyjazdu_4->setText(QCoreApplication::translate("Dialog", "14:30", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "Przyjazd", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "Kup bilet", nullptr));
        label_19->setText(QCoreApplication::translate("Dialog", "Cena", nullptr));
        godzina_odjazdu_6->setText(QCoreApplication::translate("Dialog", "88 z\305\202", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Stacja pocz\304\205tkowa", nullptr));
        label_21->setText(QCoreApplication::translate("Dialog", "Stacja ko\305\204cowa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
