#include "testobject.h"

TestObject::TestObject(QObject *parent) :
    QObject(parent)
  , p1("Hello World")
{
    connect(&timer, SIGNAL(timeout()), this, SIGNAL(timeout()));
}

QString TestObject::debugMe(const QString& data)
{
    qWarning() << data;
    return "OK";
}

void TestObject::setProp1(const QString& s)
{
    p1 = s;
    qWarning() << __func__ << p1;
}
