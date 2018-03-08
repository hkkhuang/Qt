#include "MyWin.h"

//构造函数
MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
	m_button = new QPushButton(this); //QPushButton也是窗口，每一个窗口创建时都要指定其父窗口 this表示父窗体就是其自身
	m_button->setText("hello qt");//设置显示文本
	m_button->setGeometry(100, 100, 200, 50);

	//创建控件对象
	m_lineEdit = new QLineEdit(this);
	m_textEdit = new QPlainTextEdit(this);

	//创建布局器
	QVBoxLayout* layout = new QVBoxLayout(this);
	layout->addWidget(m_lineEdit); //将第一个box添加到布局器
	layout->addWidget(m_textEdit); //将第二个box添加到布局器
	layout->addWidget(m_button);

	//使用布局器
	this->setLayout(layout);


}

//析构函数
MyWin::~MyWin()
{
}
