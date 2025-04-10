/********************************************************************************
** Form generated from reading UI file 'signal_test2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_TEST2_H
#define UI_SIGNAL_TEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signal_test2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signal_test2Class)
    {
        if (signal_test2Class->objectName().isEmpty())
            signal_test2Class->setObjectName(QString::fromUtf8("signal_test2Class"));
        signal_test2Class->resize(600, 400);
        menuBar = new QMenuBar(signal_test2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        signal_test2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signal_test2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        signal_test2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(signal_test2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        signal_test2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(signal_test2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        signal_test2Class->setStatusBar(statusBar);

        retranslateUi(signal_test2Class);

        QMetaObject::connectSlotsByName(signal_test2Class);
    } // setupUi

    void retranslateUi(QMainWindow *signal_test2Class)
    {
        signal_test2Class->setWindowTitle(QApplication::translate("signal_test2Class", "signal_test2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signal_test2Class: public Ui_signal_test2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_TEST2_H
