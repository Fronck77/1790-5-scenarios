#include "cclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CClient w;
    w.show();

    return a.exec();
}
