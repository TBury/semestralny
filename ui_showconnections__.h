/********************************************************************************
** Form generated from reading UI file 'showconnections__.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWCONNECTIONS___H
#define UI_SHOWCONNECTIONS___H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowConnections__
{
public:
    QLabel *label_3;
    QLabel *label;
    QFrame *line;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vbox;

    void setupUi(QDialog *ShowConnections__)
    {
        if (ShowConnections__->objectName().isEmpty())
            ShowConnections__->setObjectName(QString::fromUtf8("ShowConnections__"));
        ShowConnections__->resize(800, 600);
        ShowConnections__->setMaximumSize(QSize(16777215, 16777215));
        label_3 = new QLabel(ShowConnections__);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 101, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"font-size: 14px;\n"
"font-weight: 700;\n"
"color: #1A2639;"));
        label = new QLabel(ShowConnections__);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 271, 51));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-family: Open Sans;\n"
"color: white;\n"
"font-size: 32px;\n"
"background-color: #1A2639;"));
        line = new QFrame(ShowConnections__);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 991, 91));
        line->setStyleSheet(QString::fromUtf8("width: 100%;\n"
"background-color: #1A2639;\n"
"height: 50px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_2 = new QWidget(ShowConnections__);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 140, 791, 451));
        vbox = new QVBoxLayout(verticalLayoutWidget_2);
        vbox->setObjectName(QString::fromUtf8("vbox"));
        vbox->setContentsMargins(0, 0, 0, 0);
        label_3->raise();
        line->raise();
        label->raise();
        verticalLayoutWidget_2->raise();

        retranslateUi(ShowConnections__);

        QMetaObject::connectSlotsByName(ShowConnections__);
    } // setupUi

    void retranslateUi(QDialog *ShowConnections__)
    {
        ShowConnections__->setWindowTitle(QCoreApplication::translate("ShowConnections__", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("ShowConnections__", "Lista po\305\202\304\205cze\305\204", nullptr));
        label->setText(QCoreApplication::translate("ShowConnections__", "TrainTicketer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowConnections__: public Ui_ShowConnections__ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWCONNECTIONS___H
