#include "MyWin.h"

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	//创建控件对象
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//观察sizeHint的值,sizePolicy的值  [通过断点查看]
	QSize sh = m_lineEdit->sizeHint(); //+		sh	{ width = 193, height = 24 }
	QSizePolicy p = m_lineEdit->sizePolicy();//+		p	{ horizontal = Expanding (7), vertical = Fixed (0), type = LineEdit (256) }	QSizePolicy
	QSizePolicy::Policy vp = p.verticalPolicy(); //Fixed

	QSize sh2 = m_textEdit->sizeHint(); //+		sh2	{ width = 256, height = 192 }	QSize
	QSizePolicy p2 = m_textEdit->sizePolicy(); //+		sh2	{ width = 256, height = 192 }	QSize
	QSizePolicy::Policy vp2 = p2.verticalPolicy(); //		vp2	Expanding (7)	QSizePolicy::Policy

	//设置lineEdit的Policy
	m_lineEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding); //横向还是Expanding,将纵向也改为Expanding


	//创建布局器
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(m_lineEdit);
	layout->addWidget(m_textEdit);

	//使用布局器
	this->setLayout(layout);
}

MyWin::~MyWin()
{
}

