/*#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "myurl.h"

class asiakas : public QObject
{
    Q_OBJECT
  public:
    explicit asiakas(QObject *parent = nullptr);
    ~asiakas();
    void setwebToken();
    QString getasiakas();

    private slots:
        void asiakasslot(QNetworkReply *reply);

    private:
        QNetworkAccessManager * asiakasmanager;
        QNetworkReply * reply;
        QByteArray response_data;

        QString Kortinnumero;
        QString Pinkoodi;
        QByteArray webToken;
        //QString aasiakas;
        QString base_url;
        QString nimi;

        MyUrl * objecturl;

signals:
    void sendAsiakas(QString);
    void sendNimi(QString);

};


#endif // ASIAKAS_H*/
