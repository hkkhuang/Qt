//#pragma once

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPlainTextEdit>

class MyWin : public QWidget
{
	Q_OBJECT  //Ҫ���������ĺ� Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:
	//
	QPushButton* m_button; //������Ա���� ��ʾ��ť����
	QLineEdit* m_lineEdit;
	QPlainTextEdit* m_textEdit;
};
