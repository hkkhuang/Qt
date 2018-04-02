#include "SendTask.h"
#include <string.h>
#include <QDebug>

SendTask::SendTask(QObject *parent)
	: QThread(parent)
{
}

SendTask::~SendTask()
{
}

int SendTask::Create(const char* filename)
{
	strcpy(m_filePath, filename);
	m_fileSize = 0;
	m_bytesRead = 0;
	m_status = 0;
	start();//运行线程 创建线程
	return 0;
}

void SendTask::Destroy()
{
	wait(); //回收线程
}
int SendTask::getProgress()
{
	//计算进度
	if (m_fileSize <= 0)
	{
		return 0;
	}

	return m_bytesRead * 100 / m_fileSize;  //百分制
}

int SendTask::getStatus()
{
	return m_status; 
}

//线程的主函数
//创建线程-工作线程 用来发送文件
void SendTask::run()
{
	FILE* fp = fopen(m_filePath, "rb");
	if (!fp)
	{
		m_status = -1; //认为状态   发生错误
		return;
	}

	//文件大小
	fseek(fp, 0, SEEK_END); //是移动到文件最后 获取到文件大小
	m_fileSize = ftell(fp);
	fseek(fp, 0, SEEK_SET);//移回到文件开头
	
	//模拟发送文件
	char buf[2048];//读取文件缓冲区
	int part = 0;
	while (1)
	{
		int n = fread(buf, 1, 2048, fp);
		if (n<=0) //没有再继续读取 表示读取结束 读取完成
		{
			break; //文件读取完毕
		}
		m_bytesRead += n;
		qDebug() << "Read: " << m_bytesRead;
		
		//每隔一段时间 sleep一次 否则传输太慢
		part += n;
		if (part > 2048 * 16)
		{
			QThread::msleep(50);//停顿1s  控制速度
			part = 0;
		}
		
	}
	fclose(fp);
	m_status = 1; //任务状态:已经完成
	qDebug() << "Complete...";
}