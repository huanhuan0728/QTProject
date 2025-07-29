#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QInputDiglogProj.h"
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qinputdialog.h>

class QInputDiglogProj : public QMainWindow
{
    Q_OBJECT

public:
    QInputDiglogProj(QWidget *parent = Q_NULLPTR);

private:
    Ui::QInputDiglogProjClass ui;
private:
	QGridLayout *gLayout;

	QPushButton *stuNumBtn;
	QLineEdit *stuNumLineEdit;

	QPushButton *stuSexBtn;
	QLineEdit *stuSexLineEdit;

	QPushButton *stuNameBtn;
	QLineEdit *stuNameLineEdit;

	QPushButton *stuScoreBtn;
	QLineEdit *stuScoreLineEdit;

	private slots:
	void modifyStuNum();
	void modifyStuSex();
	
};
