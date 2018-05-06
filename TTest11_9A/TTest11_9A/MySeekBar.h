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

	//鼠标事件
	virtual void mouseMoveEvent(QMouseEvent *event); //移动
	virtual void mousePressEvent(QMouseEvent *event); //按下
	virtual void mouseReleaseEvent(QMouseEvent *event); //释放
	//绘制
	virtual void paintEvent(QPaintEvent *event);

private:
	//转换
	int position2progress(int position);
	int progress2position(int position);

private: 
	int m_range;
	int m_progress;
	bool m_focused; //是否获取焦点

	bool m_pressed; //是否安县鼠标
	QRect m_RalidRegion;

};
