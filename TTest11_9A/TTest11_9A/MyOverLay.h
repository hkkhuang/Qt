#pragma once

#include <QWidget>

class MyOverLay : public QWidget
{
	Q_OBJECT

public:
	MyOverLay(QWidget *parent);
	~MyOverLay();

	void setText(const QString &text);

private:
	virtual void paintEvent(QPaintEvent *event);

private:
	QString m_text;
};
