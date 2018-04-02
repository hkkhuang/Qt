#include "SendDlg.h"
#include "GBK.h"

SendDlg::SendDlg(const QString& filename, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//中文字符的转换
	string gbk_filename = GBK::FromUnicode(filename);

	//创建工作线程
	m_task = new SendTask(NULL);
	m_task->Create(gbk_filename.c_str());

	//每500ms查询
	m_timerId = startTimer(500);
}

SendDlg::~SendDlg()
{
}

void SendDlg::timerEvent(QTimerEvent* event)
{
	//每500ms查询
	if (event->timerId() == m_timerId)
	{
		//获取工作线程当前的任务状态和进度   并显示
		int status = m_task->getStatus();
		int progress = m_task->getProgress();
		ui.progressBar->setValue(progress);

		if (status == 1) //成功传输 后
		{
			m_task->Destroy(); //回收线程
			delete m_task;

			killTimer(m_timerId); //关闭定时器 在关闭对话框之前
			this->accept(); //关闭对话框
		}
	}
}