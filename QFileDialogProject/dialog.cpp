#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("QFileDialog类控件");

    //创建控件
    fileNameLabel = new QLabel("文件名称： ");
    fileNameLineEdit = new QLineEdit();

    fileButton = new QPushButton("选择...");
    getFileInfoButton = new QPushButton("查看文件大小");
    fileSizeLabel = new QLabel("文件大小：");
    fileSizeLabelLineEdit = new QLineEdit();
    fileSizeLabelLineEdit->setReadOnly(true);

    //排列布局
    QGridLayout *glayout = new QGridLayout();
    glayout->addWidget(fileNameLabel, 0, 0);
    glayout->addWidget(fileNameLineEdit, 0, 1);

    glayout->addWidget(fileButton, 0, 2);
    //glayout->addWidget(getFileInfoButton, 2,0);

    glayout->addWidget(fileSizeLabel,1,0);
    glayout->addWidget(fileSizeLabelLineEdit, 1, 1, 1, 2);

    //QHBoxLayout *hlayout = new QHBoxLayout();
    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->addWidget(getFileInfoButton);

    QVBoxLayout *vlayout = new QVBoxLayout(this);
    vlayout->addLayout(glayout);
    vlayout->addLayout(hlayout);

    connect(fileButton, SIGNAL(clicked()), this, SLOT(getFileInfoFunc()));
    connect(getFileInfoButton, SIGNAL(clicked(bool)), this, SLOT(getFileSizeFunc()));
}

Dialog::~Dialog() {}

void Dialog::getFileInfoFunc()//用于打开文件
{
    QString fileName = QFileDialog::getOpenFileName(this, "打开", "/", "File(*)");
    fileNameLineEdit->setText(fileName);

}
void Dialog::getFileSizeFunc()//用于获取文件大小
{
    QString fileName = fileNameLineEdit->text();
    QFileInfo fileInfo(fileName);
    qint64 size = fileInfo.size();
    QString sizeStr = QString::number(size) + "Bity";
    fileSizeLabelLineEdit->setText(sizeStr);
}
