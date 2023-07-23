#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LeopardWeb_GUI.h"
#include "admindialog.h"

class LeopardWeb_GUI : public QMainWindow
{
    Q_OBJECT

public:
    LeopardWeb_GUI(QWidget *parent = nullptr);
    ~LeopardWeb_GUI();
private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::LeopardWeb_GUIClass ui;
    AdminDialog* adminDialog;
};
