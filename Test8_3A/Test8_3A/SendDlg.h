#pragma once
#include <QDialog>
#include "ui_SendDlg.h"
#include "SendTask.h"

class SendDlg : public QDialog
{
	Q_OBJECT

public:
	SendDlg(const QString& filename, QWidget *parent = Q_NULLPTR); //��Ӳ���
	~SendDlg();

	//��д����
	virtual void timerEvent(QTimerEvent* event);
private:
	Ui::SendDlg ui;

	SendTask* m_task; // ���������߳�
	int m_timerId; //��ʱ��ID
	
};
