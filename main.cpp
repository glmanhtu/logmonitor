#include "logmonitor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogMonitor w;
    w.show();

    return a.exec();
}
