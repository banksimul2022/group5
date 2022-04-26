#ifndef PAAIKKUNA_H
#define PAAIKKUNA_H

#include <QDialog>

namespace Ui {
class Paaikkuna;
}

class Paaikkuna : public QDialog
{
    Q_OBJECT

public:
    explicit Paaikkuna(QWidget *parent = nullptr);
    ~Paaikkuna();

private slots:
    void on_selaatilitapahtumia_clicked();

    void on_nostarahaa_clicked();

    void on_talletarahaa_clicked();

    void on_kirjaudu_ulos_clicked();

    void on_naytasaldo_clicked();

private:
    Ui::Paaikkuna *ui;

};

#endif // PAAIKKUNA_H