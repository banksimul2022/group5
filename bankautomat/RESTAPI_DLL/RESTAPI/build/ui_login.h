/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *LeKortti;
    QLineEdit *LePIN;
    QPushButton *BtnLogin;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 300);
        LeKortti = new QLineEdit(Login);
        LeKortti->setObjectName(QString::fromUtf8("LeKortti"));
        LeKortti->setGeometry(QRect(140, 40, 120, 50));
        LePIN = new QLineEdit(Login);
        LePIN->setObjectName(QString::fromUtf8("LePIN"));
        LePIN->setGeometry(QRect(140, 110, 120, 50));
        BtnLogin = new QPushButton(Login);
        BtnLogin->setObjectName(QString::fromUtf8("BtnLogin"));
        BtnLogin->setGeometry(QRect(140, 170, 120, 50));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        BtnLogin->setText(QCoreApplication::translate("Login", "Kirjaudu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
