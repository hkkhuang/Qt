#pragma once
#include <QtWidgets/QWidget>
#include <QDialog>
#include "ui_DlgSelect.h"

class DlgSelect : public QDialog
{
	Q_OBJECT

public:
	DlgSelect(QStringList* nubmers, QWidget *parent = Q_NULLPTR);
	~DlgSelect();

	// 定时器
	virtual void timerEvent(QTimerEvent * event);

	// 窗口被关闭
	virtual void closeEvent(QCloseEvent * event);

private slots:
	int onSelectNext();

private:
	int saveResults();
private:
	Ui::DlgSelect ui;
	QIcon m_iconStart, m_iconStop;

	QStringList* m_nubmers;
	int  m_timerId;
	bool m_working; // 正在抽奖
	int  m_now; // 当前显示

	int* m_flags; // 不重复抽取
	int  m_total;
	int  m_selected; // 已经被抽中的个数 <= m_total
};
