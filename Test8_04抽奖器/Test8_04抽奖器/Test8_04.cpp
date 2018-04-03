#include "Test8_04.h"
#include "DlgSelect.h"

Test8_04::Test8_04(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// 加载号码列表
	m_source.load();
	for (int i = 0; i < m_source.numbers.size(); i++)
	{
		string& number = m_source.numbers[i];

		// 显示到列表控件
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(number.c_str());
		ui.m_lstNumbers->addItem(item);
	}

	// 事件
	connect(ui.m_btnEnter, SIGNAL(clicked()), this, SLOT(onEnter()));

}

int Test8_04::onEnter()
{
	QStringList numbers;
	for (int i = 0; i < m_source.numbers.size(); i++)
	{
		string& value = m_source.numbers[i];
		numbers.append(value.c_str());
	}

	// 隐藏主界面
	// this->hide(); //

	// 进入抽奖界面
	DlgSelect dlg(&numbers, this);
	dlg.exec();

	// 恢复显示主界面
	//this->showNormal();
	//this->activateWindow();
	return 0;
}