#include "signal_test2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    signal_test2 w;
    w.show();
    return a.exec();
}
