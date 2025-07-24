#include "mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    DockWidgetFunc();
}

MainWindow::~MainWindow() {}

void MainWindow::DockWidgetFunc()
{
    setWindowTitle("QDockWidget类停靠窗口测试");

    QTextEdit *tedit = new QTextEdit(this);
    tedit->setText("大学");
    tedit->setAlignment(Qt::AlignCenter);
    setCentralWidget(tedit);

    //创建停靠窗口1
    QDockWidget *dw1 = new QDockWidget("停靠窗口（一）", this);
    dw1->setFeatures(QDockWidget::DockWidgetMovable);//可移动特性
    dw1->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);

    QTextEdit *qtEdit1 = new QTextEdit();
    qtEdit1->setText("内容");
    dw1->setWidget(qtEdit1);
    addDockWidget(Qt::RightDockWidgetArea, dw1);

    //停靠窗口2
    QDockWidget *dw2 = new QDockWidget("停靠窗口（二）", this);
    dw2->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable);

    QTextEdit * qtEdit2 = new QTextEdit();
    qtEdit2->setText("内容2");
    dw2->setWidget(qtEdit2);
    addDockWidget(Qt::RightDockWidgetArea, dw2);

}
