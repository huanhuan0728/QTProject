#include "QCustormerMsgWindow.h"

QCustormerMsgWindow::QCustormerMsgWindow(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);

	resize(120, 90);

	glayout = new QGridLayout(this);
	label1 = new QLabel("自定义消息");
	label2 = new QLabel("未测试状态");
	pushButton = new QPushButton("测试按键");

	glayout->addWidget(label1, 0, 0);
	//glayout->addWidget(label2, 1, 0);
	glayout->addWidget(pushButton, 0, 1);
	glayout->addWidget(label2, 1, 0, 1, 1);

	connect(pushButton, SIGNAL(clicked()), this, SLOT(customMsg()));

}

QCustormerMsgWindow::~QCustormerMsgWindow()
{

}

void QCustormerMsgWindow::customMsg()
{
	QMessageBox msgbox;
	msgbox.setWindowTitle("消息窗口");

	//添加按钮
	QPushButton *btn1 = msgbox.addButton("YES", QMessageBox::ActionRole);
	QPushButton *btn2 = msgbox.addButton("NO", QMessageBox::ActionRole);

	//添加图标
	msgbox.exec();
	//判断用户点击事件
	if (msgbox.clickedButton() == btn1)
	{
		label2->setText("点击了yes");
	}
	else if(msgbox.clickedButton() == btn2)
	{
		label2->setText("点击了NO");
	}

}
