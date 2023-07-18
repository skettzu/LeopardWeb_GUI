#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LeopardWeb_GUI.h"

class LeopardWeb_GUI : public QMainWindow
{
    Q_OBJECT

public:
    LeopardWeb_GUI(QWidget *parent = nullptr);
    ~LeopardWeb_GUI();

private:
    Ui::LeopardWeb_GUIClass ui;
};
