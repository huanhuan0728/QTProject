#pragma once

#include <QtWidgets/QDialog>
#include "ui_QGetHost.h"
#include <QtNetwork/qhostinfo.h>
#include <QtNetwork\qnetworkinterface.h>

class QGetHost : public QDialog
{
    Q_OBJECT

public:
    QGetHost(QWidget *parent = Q_NULLPTR);
	~QGetHost();

	void GetHostNameAndIpInfo();	//获取主机名称和IP地址

private:
    Ui::QGetHostClass ui;

	private slots:
	void btn1Clicked();
};
