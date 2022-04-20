/********************************************************************************
** Form generated from reading UI file 'pinkoodi_engine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINKOODI_ENGINE_H
#define UI_PINKOODI_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pinkoodi_engine
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *a4;
    QPushButton *a2;
    QPushButton *a5;
    QPushButton *a7;
    QPushButton *a9;
    QPushButton *clear;
    QPushButton *a1;
    QPushButton *a8;
    QPushButton *enter;
    QPushButton *a0;
    QPushButton *a6;
    QPushButton *a3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *pinkoodi_engine)
    {
        if (pinkoodi_engine->objectName().isEmpty())
            pinkoodi_engine->setObjectName(QString::fromUtf8("pinkoodi_engine"));
        pinkoodi_engine->resize(375, 343);
        gridLayoutWidget = new QWidget(pinkoodi_engine);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 110, 254, 146));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        a4 = new QPushButton(gridLayoutWidget);
        a4->setObjectName(QString::fromUtf8("a4"));

        gridLayout->addWidget(a4, 1, 0, 1, 1);

        a2 = new QPushButton(gridLayoutWidget);
        a2->setObjectName(QString::fromUtf8("a2"));

        gridLayout->addWidget(a2, 0, 1, 1, 1);

        a5 = new QPushButton(gridLayoutWidget);
        a5->setObjectName(QString::fromUtf8("a5"));

        gridLayout->addWidget(a5, 1, 1, 1, 1);

        a7 = new QPushButton(gridLayoutWidget);
        a7->setObjectName(QString::fromUtf8("a7"));

        gridLayout->addWidget(a7, 2, 0, 1, 1);

        a9 = new QPushButton(gridLayoutWidget);
        a9->setObjectName(QString::fromUtf8("a9"));

        gridLayout->addWidget(a9, 2, 2, 1, 1);

        clear = new QPushButton(gridLayoutWidget);
        clear->setObjectName(QString::fromUtf8("clear"));

        gridLayout->addWidget(clear, 3, 0, 1, 1);

        a1 = new QPushButton(gridLayoutWidget);
        a1->setObjectName(QString::fromUtf8("a1"));

        gridLayout->addWidget(a1, 0, 0, 1, 1);

        a8 = new QPushButton(gridLayoutWidget);
        a8->setObjectName(QString::fromUtf8("a8"));

        gridLayout->addWidget(a8, 2, 1, 1, 1);

        enter = new QPushButton(gridLayoutWidget);
        enter->setObjectName(QString::fromUtf8("enter"));

        gridLayout->addWidget(enter, 3, 2, 1, 1);

        a0 = new QPushButton(gridLayoutWidget);
        a0->setObjectName(QString::fromUtf8("a0"));

        gridLayout->addWidget(a0, 3, 1, 1, 1);

        a6 = new QPushButton(gridLayoutWidget);
        a6->setObjectName(QString::fromUtf8("a6"));

        gridLayout->addWidget(a6, 1, 2, 1, 1);

        a3 = new QPushButton(gridLayoutWidget);
        a3->setObjectName(QString::fromUtf8("a3"));

        gridLayout->addWidget(a3, 0, 2, 1, 1);

        lineEdit = new QLineEdit(pinkoodi_engine);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 260, 251, 24));
        lineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(pinkoodi_engine);

        QMetaObject::connectSlotsByName(pinkoodi_engine);
    } // setupUi

    void retranslateUi(QDialog *pinkoodi_engine)
    {
        pinkoodi_engine->setWindowTitle(QCoreApplication::translate("pinkoodi_engine", "Dialog", nullptr));
        a4->setText(QCoreApplication::translate("pinkoodi_engine", "4", nullptr));
        a2->setText(QCoreApplication::translate("pinkoodi_engine", "2", nullptr));
        a5->setText(QCoreApplication::translate("pinkoodi_engine", "5", nullptr));
        a7->setText(QCoreApplication::translate("pinkoodi_engine", "7", nullptr));
        a9->setText(QCoreApplication::translate("pinkoodi_engine", "9", nullptr));
        clear->setText(QCoreApplication::translate("pinkoodi_engine", "clear", nullptr));
        a1->setText(QCoreApplication::translate("pinkoodi_engine", "1", nullptr));
        a8->setText(QCoreApplication::translate("pinkoodi_engine", "8", nullptr));
        enter->setText(QCoreApplication::translate("pinkoodi_engine", "enter", nullptr));
        a0->setText(QCoreApplication::translate("pinkoodi_engine", "0", nullptr));
        a6->setText(QCoreApplication::translate("pinkoodi_engine", "6", nullptr));
        a3->setText(QCoreApplication::translate("pinkoodi_engine", "3", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pinkoodi_engine: public Ui_pinkoodi_engine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINKOODI_ENGINE_H
