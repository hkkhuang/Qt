#pragma once

#include <QWidget>
//添加头文件
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QPushButton>

class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:
	//添加成员
	QPushButton* m_button;
	QLineEdit* m_lineEdit;
	QPlainTextEdit* m_textEdit;

};
