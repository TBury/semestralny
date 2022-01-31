/********************************************************************************
** Form generated from reading UI file 'endscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDSCREEN_H
#define UI_ENDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_endscreen
{
public:
    QLabel *label_3;
    QFrame *line;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *endscreen)
    {
        if (endscreen->objectName().isEmpty())
            endscreen->setObjectName(QString::fromUtf8("endscreen"));
        endscreen->resize(800, 600);
        label_3 = new QLabel(endscreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 210, 501, 61));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 24px;\n"
"color: black;"));
        line = new QFrame(endscreen);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(endscreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 150, 461, 61));
        label_2->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 32px;\n"
"font-weight: 700;\n"
"color: black;"));
        label = new QLabel(endscreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 271, 51));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));

        retranslateUi(endscreen);

        QMetaObject::connectSlotsByName(endscreen);
    } // setupUi

    void retranslateUi(QDialog *endscreen)
    {
        endscreen->setWindowTitle(QCoreApplication::translate("endscreen", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("endscreen", "Odbierz reszt\304\231 i bilet. Zapraszamy ponownie!", nullptr));
        label_2->setText(QCoreApplication::translate("endscreen", "Dzi\304\231kujemy za zakup biletu!", nullptr));
        label->setText(QCoreApplication::translate("endscreen", "TrainTicketer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endscreen: public Ui_endscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDSCREEN_H
