#ifndef NOSTA_RAHAA_H
#define NOSTA_RAHAA_H

#include <QDialog>
#include "restapi.h"
#include "creditdebit.h"
#include <QTimer>

namespace Ui {
class nosta_rahaa;
}

class nosta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nosta_rahaa(QWidget *parent = nullptr);
    ~nosta_rahaa();

    QTimer * timer;

public slots:

signals:

private slots:
    void on_Sulje_btn_clicked();
    void on_kakskyt_btn_clicked();
    void on_nelkyt_btn_clicked();
    void on_kuuskyt_btn_clicked();
    void on_satku_btn_clicked();
    void on_kakssataa_btn_clicked();
    void on_viishunttia_btn_clicked();
    void on_Nosta_btn_clicked();
    void aika_loppu();

private:
    Ui::nosta_rahaa *ui;
    RESTAPI * pRESTAPI_DLL;
    creditdebit * pcreditdebit;
    QString nostoSumma;
    QString tilinnumero;
    QString raja;
    QString saldo;
    QString debit;
    QString credit;
};

#endif // NOSTA_RAHAA_H
