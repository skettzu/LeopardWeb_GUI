/********************************************************************************
** Form generated from reading UI file 'LeopardWeb_GUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEOPARDWEB_GUI_H
#define UI_LEOPARDWEB_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeopardWeb_GUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LeopardWeb_GUIClass)
    {
        if (LeopardWeb_GUIClass->objectName().isEmpty())
            LeopardWeb_GUIClass->setObjectName("LeopardWeb_GUIClass");
        LeopardWeb_GUIClass->resize(600, 400);
        menuBar = new QMenuBar(LeopardWeb_GUIClass);
        menuBar->setObjectName("menuBar");
        LeopardWeb_GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LeopardWeb_GUIClass);
        mainToolBar->setObjectName("mainToolBar");
        LeopardWeb_GUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LeopardWeb_GUIClass);
        centralWidget->setObjectName("centralWidget");
        LeopardWeb_GUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LeopardWeb_GUIClass);
        statusBar->setObjectName("statusBar");
        LeopardWeb_GUIClass->setStatusBar(statusBar);

        retranslateUi(LeopardWeb_GUIClass);

        QMetaObject::connectSlotsByName(LeopardWeb_GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *LeopardWeb_GUIClass)
    {
        LeopardWeb_GUIClass->setWindowTitle(QCoreApplication::translate("LeopardWeb_GUIClass", "LeopardWeb_GUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeopardWeb_GUIClass: public Ui_LeopardWeb_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEOPARDWEB_GUI_H
