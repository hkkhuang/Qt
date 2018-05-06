#pragma once

#include <QFrame>

class MySeekBar : public QFrame
{
	Q_OBJECT

public:
	MySeekBar(QWidget *parent);
	~MySeekBar();

signals:
	void clicked(int progress);
	void tracking(int progress,QPoint pos);
	void focused(bool yes);

private:
	void setRange(int range);
	void setProgress(int progress);
	int range() const;
	int progress() const;

private:
	virtual QSize sizeHint() const;
	virtual void enterEvent(QEvent *event);
	virtual void leaveEvent(QEvent *event);

	//����¼�
	virtual void mouseMoveEvent(QMouseEvent *event); //�ƶ�
	virtual void mousePressEvent(QMouseEvent *event); //����
	virtual void mouseReleaseEvent(QMouseEvent *event); //�ͷ�
	//����
	virtual void paintEvent(QPaintEvent *event);

private:
	//ת��
	int position2progress(int position);
	int progress2position(int position);

private: 
	int m_range;
	int m_progress;
	bool m_focused; //�Ƿ��ȡ����

	bool m_pressed; //�Ƿ������
	QRect m_RalidRegion;

};
