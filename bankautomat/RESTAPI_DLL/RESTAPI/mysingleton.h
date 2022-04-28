#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <qstring.h>

class MySingleton
{
private:
    static MySingleton* instance;
    QString name;

public:
    static MySingleton* getInstance();

    QString getName() const;
    void setName(const QString &value);
};

#endif // MYSINGLETON_H
