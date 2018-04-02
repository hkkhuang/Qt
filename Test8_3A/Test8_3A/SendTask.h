#pragma once

#include <QThread>

class SendTask : public QThread
{
	Q_OBJECT

public:
	SendTask(QObject *parent);
	~SendTask();

	//�����������߳�
	int Create(const char* filename);
	void Destroy();

	int getStatus();
	int getProgress();

private:
	void run(); // �߳���ں���

private:
	char m_filePath[128];
	int m_fileSize;//�ļ���С �ļ������ֽ���
	int m_bytesRead;//��ȡ�������˶����ֽ�
	int m_status; //�����״̬
};
