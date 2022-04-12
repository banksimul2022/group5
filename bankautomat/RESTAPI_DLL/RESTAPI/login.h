#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <korttimain.h>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_BtnLogin_clicked();

private:
    Ui::Login *ui;
    QString kortinnumero;
    QString PIN;
    QString Asiakas;

    Korttimain *objectkorttimain;
};

#endif // LOGIN_H
