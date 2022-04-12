#ifndef KORTTIMAIN_H
#define KORTTIMAIN_H

#include <QDialog>

namespace Ui {
class Korttimain;
}

class Korttimain : public QDialog
{
    Q_OBJECT

public:
    explicit Korttimain(QString asiKortinnumero, QString asiAsiakas, QWidget *parent = nullptr);
    ~Korttimain();

private slots:
    void on_BtnValikko_clicked();

private:
    Ui::Korttimain *ui;
};

#endif // KORTTIMAIN_H
