// main.cpp
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // feature-C
    // remove debug code
    qDebug() << "hello world."; //fix-B

    return a.exec();
}
