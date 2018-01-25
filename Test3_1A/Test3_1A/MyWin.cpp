#include "MyWin.h"

//MyWin构造函数
MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	//创建控件对象
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//创建布局器
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(m_lineEdit); //将第一个box添加到布局器
	layout->addWidget(m_textEdit); //将第二个box添加到布局器

	//使用布局器
	this->setLayout(layout);
}

MyWin::~MyWin()
{
}
