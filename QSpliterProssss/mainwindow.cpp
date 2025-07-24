#include "mainwindow.h"

#include <QSplitter>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 拆分窗口
    QSplitter *spMainWindow = new QSplitter(Qt::Horizontal, 0);
    QTextEdit *textEditMain = new QTextEdit("左边主窗口“， spMainWindow");

    QSplitter *spRight = new QSplitter(Qt::Vertical, spMainWindow);
    QTextEdit *txtEditUp = new QTextEdit("右边上部分窗口", spRight);
    QTextEdit *txtEdiDown = new QTextEdit("右边下部分窗口", spRight);

    QSplitter *sptest = new QSplitter(Qt::Vertical, spRight);
    QTextEdit *txtEditTest = new QTextEdit("课程", sptest);

    QSplitter *spTextEnd = new QSplitter(Qt::Horizontal, spMainWindow);
    QTextEdit *txtEditTestEnd = new QTextEdit("lxh", spTextEnd);

    spMainWindow->setWindowTitle("Splitter拆分窗口测试");
    spMainWindow->show();

}

MainWindow::~MainWindow() {

}
