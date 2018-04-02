#include "SendDlg.h"
#include "GBK.h"

SendDlg::SendDlg(const QString& filename, QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//�����ַ���ת��
	string gbk_filename = GBK::FromUnicode(filename);

	//���������߳�
	m_task = new SendTask(NULL);
	m_task->Create(gbk_filename.c_str());

	//ÿ500ms��ѯ
	m_timerId = startTimer(500);
}

SendDlg::~SendDlg()
{
}

void SendDlg::timerEvent(QTimerEvent* event)
{
	//ÿ500ms��ѯ
	if (event->timerId() == m_timerId)
	{
		//��ȡ�����̵߳�ǰ������״̬�ͽ���   ����ʾ
		int status = m_task->getStatus();
		int progress = m_task->getProgress();
		ui.progressBar->setValue(progress);

		if (status == 1) //�ɹ����� ��
		{
			m_task->Destroy(); //�����߳�
			delete m_task;

			killTimer(m_timerId); //�رն�ʱ�� �ڹرնԻ���֮ǰ
			this->accept(); //�رնԻ���
		}
	}
}