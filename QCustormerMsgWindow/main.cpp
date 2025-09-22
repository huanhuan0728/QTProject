#include "QCustormerMsgWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCustormerMsgWindow w;
    w.show();
    return a.exec();
}
