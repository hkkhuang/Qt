//#pragma once

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPlainTextEdit>

class MyWin : public QWidget
{
	Q_OBJECT  //要求必须包含的宏 Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:
	//
	QPushButton* m_button; //创建成员变量 表示按钮对象
	QLineEdit* m_lineEdit;
	QPlainTextEdit* m_textEdit;
};
