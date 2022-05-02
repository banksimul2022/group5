#ifndef LOGIN_H
#define LOGIN_H

#include "myurl.h"
#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class Login : public QObject
{
    Q_OBJECT
public:
    explicit Login(QObject *parent = nullptr);
    ~Login();
    void setPin(QString kortinnumero, QString pin);
    void getPin();

private slots:
    void loginSlot(QNetworkReply *reply);
private:
    QNetworkAccessManager * postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString Kortinnumero;
    QString PIN;
    QString trueFalse;
    QByteArray token;

    MyUrl * objectMyUrl;
    QString base_url;

signals:
    void getTrueFalse(QString);
};

#endif // LOGIN_H
