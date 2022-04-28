#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <qstring.h>

class MySingleton
{
private:
    static MySingleton* instance;
    QString webToken;

public:
    static MySingleton* getInstance();

    QString getwebToken() const;

};

#endif // MYSINGLETON_H
