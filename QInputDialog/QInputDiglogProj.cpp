#include "QInputDiglogProj.h"

QInputDiglogProj::QInputDiglogProj(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	resize(260, 110);
	setWindowTitle("标准输入框");

	QWidget *centralWidget = new QWidget(this);
	this->setCentralWidget(centralWidget);

	stuNumBtn = new QPushButton;
	stuNumBtn->setText("学生学号：");
	stuNumLineEdit = new QLineEdit("2022101001");

	stuNameBtn = new QPushButton;
	stuNameBtn->setText("学生姓名：");
	stuNameLineEdit = new QLineEdit("王小");

	stuSexBtn = new QPushButton;
	stuSexBtn->setText("学生性别：");
	stuSexLineEdit = new QLineEdit("男");

	stuScoreBtn = new QPushButton;
	stuScoreBtn->setText("学生分数：");
	stuScoreLineEdit = new QLineEdit("90");

	gLayout = new QGridLayout();

	centralWidget->setLayout(gLayout);

	gLayout->addWidget(stuNumBtn, 0, 0);
	gLayout->addWidget(stuNumLineEdit, 0, 1);
	gLayout->addWidget(stuNameBtn, 1, 0);
	gLayout->addWidget(stuNameLineEdit, 1, 1);
	gLayout->addWidget(stuSexBtn, 2, 0);
	gLayout->addWidget(stuSexLineEdit, 2, 1);
	gLayout->addWidget(stuScoreBtn, 3, 0);
	gLayout->addWidget(stuScoreLineEdit, 3, 1);

	connect(stuNumBtn, SIGNAL(clicked()), this, SLOT(modifyStuNum()));
	connect(stuSexBtn, SIGNAL(clicked()), this, SLOT(modifystudentsex()));

}


void  QInputDiglogProj::modifyStuNum()
{
	bool isbool;
	QString strText = QInputDialog::getText(this, "标准输入对话框", "请输入学号：", 
		QLineEdit::Normal, stuNumLineEdit->text(), &isbool);

	if (isbool && !strText.isEmpty())
	{
		stuNumLineEdit->setText(strText);
	}
}

void  QInputDiglogProj::modifyStuSex()
{
	QStringList strSexItems;
	strSexItems << "男" << "女";

	bool isbool;
	QString strsexItem = QInputDialog::getItem(this, "标准输入对话框",
		"请选择性别：", strSexItems, 0, false, &isbool);
	if (isbool && !strsexItem.isEmpty())
	{
		stuSexLineEdit->setText(strsexItem);
	}

}
