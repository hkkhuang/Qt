#pragma once

#include <QThread>

class SendTask : public QThread
{
	Q_OBJECT

public:
	SendTask(QObject *parent);
	~SendTask();

	//创建和销毁线程
	int Create(const char* filename);
	void Destroy();

	int getStatus();
	int getProgress();

private:
	void run(); // 线程入口函数

private:
	char m_filePath[128];
	int m_fileSize;//文件大小 文件的总字节数
	int m_bytesRead;//读取并处理了多少字节
	int m_status; //任务的状态
};
