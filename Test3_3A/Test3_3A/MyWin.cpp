#include "MyWin.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	m_button = new QPushButton(this);
	m_button->setText("Ok");
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//局部变量而非成员变量
	//1.使用局部变量是没有任何问题的,因为所有的对象最后都交给父窗体管理
	//2.如果想使用每一个对象,就得用一个成员变量指针指向它
	QHBoxLayout* layout1 = new QHBoxLayout();
	layout1->addWidget(m_lineEdit);
	layout1->addWidget(m_button);

	QVBoxLayout* layout2 = new QVBoxLayout();
	layout2->addLayout(layout1); //注意:添加layout1
	layout2->addWidget(m_textEdit);

	this->setLayout(layout2);
}


MyWin::~MyWin()
{
}
