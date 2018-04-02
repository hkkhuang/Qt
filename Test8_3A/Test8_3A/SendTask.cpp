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
	start();//�����߳� �����߳�
	return 0;
}

void SendTask::Destroy()
{
	wait(); //�����߳�
}
int SendTask::getProgress()
{
	//�������
	if (m_fileSize <= 0)
	{
		return 0;
	}

	return m_bytesRead * 100 / m_fileSize;  //�ٷ���
}

int SendTask::getStatus()
{
	return m_status; 
}

//�̵߳�������
//�����߳�-�����߳� ���������ļ�
void SendTask::run()
{
	FILE* fp = fopen(m_filePath, "rb");
	if (!fp)
	{
		m_status = -1; //��Ϊ״̬   ��������
		return;
	}

	//�ļ���С
	fseek(fp, 0, SEEK_END); //���ƶ����ļ���� ��ȡ���ļ���С
	m_fileSize = ftell(fp);
	fseek(fp, 0, SEEK_SET);//�ƻص��ļ���ͷ
	
	//ģ�ⷢ���ļ�
	char buf[2048];//��ȡ�ļ�������
	int part = 0;
	while (1)
	{
		int n = fread(buf, 1, 2048, fp);
		if (n<=0) //û���ټ�����ȡ ��ʾ��ȡ���� ��ȡ���
		{
			break; //�ļ���ȡ���
		}
		m_bytesRead += n;
		qDebug() << "Read: " << m_bytesRead;
		
		//ÿ��һ��ʱ�� sleepһ�� ������̫��
		part += n;
		if (part > 2048 * 16)
		{
			QThread::msleep(50);//ͣ��1s  �����ٶ�
			part = 0;
		}
		
	}
	fclose(fp);
	m_status = 1; //����״̬:�Ѿ����
	qDebug() << "Complete...";
}