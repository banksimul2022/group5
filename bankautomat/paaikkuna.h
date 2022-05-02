#ifndef PAAIKKUNA_H
#define PAAIKKUNA_H

#include <QDialog>
#include "nosta_rahaa.h"


namespace Ui {
class Paaikkuna;
}

class Paaikkuna : public QDialog
{
    Q_OBJECT

public:
    explicit Paaikkuna(QWidget *parent = nullptr);
    ~Paaikkuna();

    void asetaTiedot(QString nimi, QString saldo);

private slots:
    void on_selaatilitapahtumia_clicked();

    void on_nostarahaa_clicked();

    void on_talletarahaa_clicked();

    void on_kirjaudu_ulos_clicked();

    void on_naytasaldo_clicked();

    void on_Nosta_rahaa_clicked();

private:
    Ui::Paaikkuna *ui;
    nosta_rahaa * pnosta_rahaa;

};

#endif // PAAIKKUNA_H
