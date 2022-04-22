#ifndef LOGIN_H
#define LOGIN_H

#include "myurl.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class Login;
}

class Login
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void loginSlot(QNetworkReply *reply);

private:
    Ui::Login *ui;
    //MyUrl *objectMyUrl; ei tarvita, koska muutettu metodi staattiseksi
    QString base_url;
    QString Kortinnumero;
    QString Pinkoodi;

    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;
};

#endif // LOGIN_H
