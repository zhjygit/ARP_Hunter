#pragma once

#include <QtWidgets/QMainWindow>
#include <Qthread>
#include <QMessageBox>
#include <QStandardItem>
#include "ui_ARP_Hunter.h"
#include "pcap.h"
#include "windows.h"

class ARP_Listener : public QObject
{
	Q_OBJECT

public slots:
	void listen();

signals:
	void newItem(int len, QString src, QString des, QString frame);
};

class ARP_Hunter : public QMainWindow
{
	Q_OBJECT

public:
	ARP_Hunter(QWidget* parent = Q_NULLPTR);
	QString hex_to_dec(char c1, char c2);
	ARP_Listener* listener;
	QThread* thread;

private slots:
	void about_clicked();
	void startButton_clicked();
	void stopButton_clicked();
	void clearButton_clicked();
	void tableRow_clicked(int x, int y);
	void updateTable(int len, QString src, QString des, QString frame);

private:
	Ui::ARP_HunterClass ui;
};
