#pragma once

#include <QFrame>

class MyPicture : public QFrame
{
	Q_OBJECT

public:
	MyPicture(QWidget *parent);
	~MyPicture();

	// ��imageFileΪNULL�����ʾ����ʾͼƬ
	void display(const QString& imageFile);
	void display(const QPixmap& pixmap);

	const QPixmap& pixmap()
	{
		return m_picture;
	}

private:
	void paintEvent(QPaintEvent * event);

private:
	QPixmap m_picture;
};
