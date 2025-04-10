#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_signal_test2.h"

class signal_test2 : public QMainWindow
{
    Q_OBJECT

public:
    signal_test2(QWidget *parent = nullptr);
    ~signal_test2();

private:
    Ui::signal_test2Class ui;
};
