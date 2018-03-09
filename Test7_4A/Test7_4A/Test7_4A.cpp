#include "Test7_4A.h"

Test7_4A::Test7_4A(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//在Test7_4A的构造函数中创建这个searchWindow
	m_SearchWindow = new SearchWindow(this);
	m_SearchWindow->setWindowFlags(Qt::Window);

	//添加连接
	connect(ui.btnStartSearch, SIGNAL(clicked()), this, SLOT(OnBtnStartSearchClicked()));

	//响应小窗口按钮动作
	connect(m_SearchWindow->ui.btnSearch, SIGNAL(clicked()), this, SLOT(OnStartSearch()));
}

int Test7_4A::OnBtnStartSearchClicked()
{
	//主窗体点击"开始搜索"按钮  显示搜索窗口
	m_SearchWindow->show();
	return 0;
}

//【开始搜索】按钮具体行为
int Test7_4A::OnStartSearch()
{
	QString text = m_SearchWindow->ui.txtSearch->text();
	ui.plainTextEdit->appendPlainText(text);
	
	return 0;
}