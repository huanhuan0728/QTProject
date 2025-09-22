#pragma once

#include <QtWidgets/QDialog>
#include "ui_QCustormerMsgWindow.h"
#include <qlabel.h>
#include <qpushbutton.h>
#include <qgridlayout.h>
#include <qmessagebox.h>

class QCustormerMsgWindow : public QDialog
{
    Q_OBJECT

public:
    QCustormerMsgWindow(QWidget *parent = Q_NULLPTR);
	~QCustormerMsgWindow();

private:
    Ui::QCustormerMsgWindowClass ui;
	QLabel *label1, *label2;
	QPushButton *pushButton;

	QGridLayout *glayout;

	private slots:
	void customMsg();

};
