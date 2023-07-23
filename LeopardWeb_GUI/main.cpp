#include "pch.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LeopardWeb_GUI w;
    w.show();
    return a.exec();
}
