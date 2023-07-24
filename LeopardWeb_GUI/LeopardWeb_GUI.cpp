#include "LeopardWeb_GUI.h"
#include "ui_LeopardWeb_GUI.h"

LeopardWeb_GUI::LeopardWeb_GUI(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

LeopardWeb_GUI::~LeopardWeb_GUI()
{}

void LeopardWeb_GUI::on_pushButton_Login_clicked() {
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();

    if (username == "test" && password == "test") {
        QMessageBox::information(this, "Login", "Username and password is correct");
    }
    else {
        QMessageBox::warning(this, "Login", "Username and password is not correct");
    }
}
