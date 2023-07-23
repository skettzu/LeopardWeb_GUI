#include "LeopardWeb_GUI.h"
#include <QtWidgets/QApplication>
#include <sqlite3.h>
#include "User.h"
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LeopardWeb_GUI w;
    w.show();
    return a.exec();
}
