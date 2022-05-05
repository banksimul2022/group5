#ifndef PAAIKKUNA_H
#define PAAIKKUNA_H

#include <QDialog>
#include "restapi.h"
#include "nosta_rahaa.h"
#include "talleta_rahaa.h"
#include "creditdebit.h"


namespace Ui {
class Paaikkuna;
}

class Paaikkuna : public QDialog
{
    Q_OBJECT

public:
    explicit Paaikkuna(QWidget *parent = nullptr);
    ~Paaikkuna();
    void asetaNimi(QString nimi);
    void asetaSaldo(QString saldo);
    void asetaVelka(QString velka);
    void asetaTapahtuma(QString tapahtuu);


private slots:
    void on_selaatilitapahtumia_clicked();
    void on_Nosta_rahaa_clicked();
    void on_Talleta_rahaa_clicked();
    void on_Kirjaudu_ulos_clicked();

signals:

private:
    Ui::Paaikkuna *ui;
    nosta_rahaa * pnosta_rahaa;
    talleta_rahaa * ptalleta_rahaa;
    creditdebit * pcreditdebit;
    RESTAPI * pRESTAPI_DLL;
    QString tilitapahtuma;
};

#endif // PAAIKKUNA_H
