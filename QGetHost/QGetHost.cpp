#include "QGetHost.h"

QGetHost::QGetHost(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &QGetHost::GetHostNameAndIpInfo);

}

QGetHost::~QGetHost()
{

}

void QGetHost::GetHostNameAndIpInfo()
{
	//获取主机名称
	QString StrLocalHostName = QHostInfo::localHostName();
	ui.lineEdit->setText(StrLocalHostName);

	// 根据主机名称获取对应的IP地址
	QString StrlocalAddress = "";
	QHostInfo hostinfo = QHostInfo::fromName(StrLocalHostName);
	QList<QHostAddress> ipaddress = hostinfo.addresses();

	if (!ipaddress.isEmpty())
	{
		for (int i = 0; i < ipaddress.size(); i++)
		{
			QHostAddress addressHost = ipaddress.at(i);
			if (QAbstractSocket::IPv4Protocol == addressHost.toString())
			{
				StrlocalAddress = addressHost.toString();
				break;
			}
		}
	}
	ui.lineEdit_2->setText(StrlocalAddress);

}

void QGetHost::btn1Clicked()
{
	GetHostNameAndIpInfo();
}
