#ifndef TALLETA_RAHAA_H
#define TALLETA_RAHAA_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
#include "restapi.h"


namespace Ui {
class talleta_rahaa;
}

class talleta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit talleta_rahaa(QWidget *parent = nullptr);
    ~talleta_rahaa();
    QTimer * timer;

public slots:

private slots:
    void on_Sulje_clicked();

    void on_kakskyt_clicked();

    void on_nelkyt_clicked();

    void on_kuuskyt_clicked();

    void on_sata_clicked();

    void on_kakssataa_clicked();

    void on_viissataa_clicked();

    void on_Talleta_rahaa_clicked();

    void aika_loppu();

signals:

private:
    Ui::talleta_rahaa *ui;
    QString talletussumma;
    RESTAPI * pRESTAPI_DLL;
    QString tilinnumero;
    QString saldo;
    QString debit;   
};

#endif // TALLETA_RAHAA_H
