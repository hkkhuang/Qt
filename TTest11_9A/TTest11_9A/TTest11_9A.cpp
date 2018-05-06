#include "TTest11_9A.h"

TTest11_9A::TTest11_9A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//��ʼ����ʾ����
	m_tooltip = new MyOverLay(this);
	m_tooltip->setFixedSize(50, 20);
	m_tooltip->hide();

	connect(ui.m_seekBar, SIGNAL(focused(bool)),
		this, SLOT(onSeekFocused(bool)));
	connect(ui.m_seekBar, SIGNAL(clicked(int)),
		this, SLOT(onSeekClicked(int)));
	connect(ui.m_seekBar, SIGNAL(tracking(int, QPoint)),
		this, SLOT(onSeekTracking(int, QPoint)));
}

int TTest11_9A::onSeekFocused(bool yes)
{
	//�϶�������ʱ����ʾ��ʾ����
	m_tooltip->setVisible(yes);
	return 0;
}

int TTest11_9A::onSeekClicked(int progress)
{
	return 0;
}

int TTest11_9A::onSeekTracking(int progress, QPoint pos)
{
	//��ʾλ����Ϣ
	char buf[64];
	sprintf(buf, "%d", progress);
	m_tooltip->setText(buf);

	pos.setY(-25);
	pos.setX(pos.x() - 30);
	pos = ui.m_seekBar->mapToGlobal(pos);
	m_tooltip->move(pos);
	return 0;
}