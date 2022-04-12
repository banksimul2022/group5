/********************************************************************************
** Form generated from reading UI file 'korttimain.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KORTTIMAIN_H
#define UI_KORTTIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Korttimain
{
public:
    QLabel *LabelAsiakas;
    QLabel *LabelKortinnumero;
    QPushButton *BtnValikko;

    void setupUi(QDialog *Korttimain)
    {
        if (Korttimain->objectName().isEmpty())
            Korttimain->setObjectName(QString::fromUtf8("Korttimain"));
        Korttimain->resize(400, 300);
        LabelAsiakas = new QLabel(Korttimain);
        LabelAsiakas->setObjectName(QString::fromUtf8("LabelAsiakas"));
        LabelAsiakas->setGeometry(QRect(60, 30, 100, 30));
        QFont font;
        font.setPointSize(14);
        LabelAsiakas->setFont(font);
        LabelKortinnumero = new QLabel(Korttimain);
        LabelKortinnumero->setObjectName(QString::fromUtf8("LabelKortinnumero"));
        LabelKortinnumero->setGeometry(QRect(240, 30, 100, 30));
        LabelKortinnumero->setFont(font);
        BtnValikko = new QPushButton(Korttimain);
        BtnValikko->setObjectName(QString::fromUtf8("BtnValikko"));
        BtnValikko->setGeometry(QRect(110, 200, 151, 51));

        retranslateUi(Korttimain);

        QMetaObject::connectSlotsByName(Korttimain);
    } // setupUi

    void retranslateUi(QDialog *Korttimain)
    {
        Korttimain->setWindowTitle(QCoreApplication::translate("Korttimain", "Dialog", nullptr));
        LabelAsiakas->setText(QCoreApplication::translate("Korttimain", "TextLabel", nullptr));
        LabelKortinnumero->setText(QCoreApplication::translate("Korttimain", "TextLabel", nullptr));
        BtnValikko->setText(QCoreApplication::translate("Korttimain", "Valikko", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Korttimain: public Ui_Korttimain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIMAIN_H
