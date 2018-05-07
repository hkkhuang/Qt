#pragma once

#include <QFrame>

class MyPicture : public QFrame
{
	Q_OBJECT

public:
	MyPicture(QWidget *parent);
	~MyPicture();

	// 若imageFile为NULL，则表示不显示图片
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
