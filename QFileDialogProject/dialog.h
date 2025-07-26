#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>//水平布局
#include <QVBoxLayout>
#include <QFileDialog>
#include <QGridLayout>


class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    QLabel *fileNameLabel;
    QLineEdit *fileNameLineEdit;

    QPushButton *fileButton;

    QLabel *fileSizeLabel;
    QLineEdit *fileSizeLabelLineEdit;

    QPushButton *getFileInfoButton;

private slots:
    void getFileInfoFunc();//用于打开文件
    void getFileSizeFunc();//用于获取文件大小

};
#endif // DIALOG_H
