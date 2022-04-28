#include "mysingleton.h"

MySingleton* MySingleton::instance = nullptr;

MySingleton* MySingleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new MySingleton();
    }

    return instance;
}

QString MySingleton::getName() const
{
    return name;
}

void MySingleton::setName(const QString &value)
{
    name = value;
}
