#ifndef LOGIN_H
#define LOGIN_H

#include "myurl.h"

#include <QDialog>
#include <korttimain.h>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

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
    void loginSlot(QNetworkReply *reply);

private:
    Ui::Login *ui;
    QString kortinnumero;
    QString PIN;
    QString Asiakas;

    Korttimain *objectkorttimain;
    MyUrl *objectMyUrl;
    QString base_url;

    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;
};

#endif // LOGIN_H
