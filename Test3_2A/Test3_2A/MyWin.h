#pragma once

#include <QObject>
//添加头文件
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPlainTextEdit>

class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

//添加成员
	QLineEdit* m_lineEdit;
	QPlainTextEdit* m_textEdit;

};
