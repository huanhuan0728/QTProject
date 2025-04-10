#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnMax, SIGNAL(clicked()), this, SLOT(showMaximized()));
    connect(ui->btnMin, SIGNAL(clicked()), this, SLOT(showMiniMized()));
    connect(ui->btnClose, SIGNAL(clicked()), this, SLOT(showNormal()));
    connect(ui->btnClose, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

