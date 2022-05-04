#ifndef TALLETA_RAHAA_H
#define TALLETA_RAHAA_H

#include <QDialog>
#include <QDebug>
#include "restapi.h"
#include "mainwindow.h"

namespace Ui {
class talleta_rahaa;
}

class talleta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit talleta_rahaa(QWidget *parent = nullptr);
    ~talleta_rahaa();

signals:
    void saldopaivitys();
    void debitSignal(QString);

public slots:

private slots:
    void on_Sulje_clicked();
    void on_Talleta_rahaa_clicked();
    void on_kakskyt_clicked();
    void on_nelkyt_clicked();
    void on_kuuskyt_clicked();
    void on_sata_clicked();
    void on_kakssataa_clicked();
    void on_viissataa_clicked();
    void getdebitSlot(QString);

private:
    Ui::talleta_rahaa *ui;
    QString nostonsumma;
    QString saldo;
    QString tilinnumero;
    RESTAPI * pRESTAPI_DLL;
    QString debit;
    Paaikkuna * Ppaaikkuna;


};

#endif // TALLETA_RAHAA_H
