#pragma once
#include <QDialog>
#include "ui_SendDlg.h"
#include "SendTask.h"

class SendDlg : public QDialog
{
	Q_OBJECT

public:
	SendDlg(const QString& filename, QWidget *parent = Q_NULLPTR); //添加参数
	~SendDlg();

	//重写函数
	virtual void timerEvent(QTimerEvent* event);
private:
	Ui::SendDlg ui;

	SendTask* m_task; // 创建工作线程
	int m_timerId; //定时器ID
	
};
