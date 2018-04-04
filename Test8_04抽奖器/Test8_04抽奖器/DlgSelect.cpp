#include "DlgSelect.h"
#include "GBK.h"
#include <QMessageBox>
#include <QCloseEvent>  


DlgSelect::DlgSelect(QStringList* nubmers, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_nubmers = nubmers;
	m_working = false;
	m_iconStart = QIcon(":Resources/play.png");
	m_iconStop = QIcon(":Resources/stop.png");

	// 初始化标识位
	m_selected = 0;
	m_total = nubmers->length();
	m_flags = new int[m_total];
	for (int i = 0; i < m_total; i++)
		m_flags[i] = 0;

	// 事件
	connect(ui.m_btnStart, SIGNAL(clicked()), this, SLOT(onSelectNext()));
}

DlgSelect::~DlgSelect()
{
	delete[] m_flags;
}

void DlgSelect::timerEvent(QTimerEvent * event)
{
	// 翻到下一个
	int next = m_now;
	while (1)
	{
		// 回头
		next++;
		if (next >= m_total) next = 0;

		// 确保不重复
		if (!m_flags[next])
			break;
	}
	m_now = next;

	// 显示	
	ui.m_ctlDisplay->setText(m_nubmers->at(m_now));
}

int DlgSelect::onSelectNext()
{
	// 都抽中了
	if (m_selected >= m_total) return 0;

	if (!m_working)
	{
		// 启动抽奖
		m_now = 0;
		m_timerId = startTimer(100);
		ui.m_btnStart->setIcon(m_iconStop);
		ui.m_btnStart->setText(GBK::ToUnicode("停止"));
		m_working = true;
	}
	else
	{
		// 停止
		killTimer(m_timerId);
		m_working = false;
		ui.m_btnStart->setIcon(m_iconStart);
		ui.m_btnStart->setText(GBK::ToUnicode("开始"));
		// 
		m_flags[m_now] = 1;
		QString number = m_nubmers->at(m_now);
		ui.m_lstResult->addItem(new QListWidgetItem(number));
	}
	return 0;
}

int DlgSelect::saveResults()
{
	// 将结果保存到文件, append方式
	FILE* fp = fopen("results.txt", "ab");
	if (!fp)
	{
		QMessageBox::critical(this,
			GBK::ToUnicode("严重错误"), "无法保存结果!");
		return -1;
	}

	fprintf(fp, "----------- result ---------\n");

	// 从结果列表里取得所有条目，保存到文件里
	for (int i = 0; i < ui.m_lstResult->count(); i++)
	{
		QListWidgetItem* item = ui.m_lstResult->item(i);
		QString qValue = item->text();
		string number = GBK::FromUnicode(qValue);

		fprintf(fp, "%s\n", number.c_str());
	}
	fclose(fp);

	return 0;
}

// 窗口被关闭时被调用
void DlgSelect::closeEvent(QCloseEvent * event)
{
	// 如果保存失败，则不关闭此对话框
	if (saveResults() < 0)
	{
		event->ignore();
		return;
	}

	QDialog::closeEvent(event);
}