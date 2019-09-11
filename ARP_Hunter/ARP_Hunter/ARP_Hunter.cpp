#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "ARP_Hunter.h"

pcap_if_t* alldevs;
pcap_if_t* d;
pcap_t* adhandle;
DWORD st;
DWORD et;
struct pcap_pkthdr* header;
const u_char* pkt_data;
int adapterIndex;
bool threadFlag;
char errbuf[PCAP_ERRBUF_SIZE];

ARP_Hunter::ARP_Hunter(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Retrieve the device list
	pcap_findalldevs(&alldevs, errbuf);
	for (d = alldevs; d; d = d->next) {
		QString str = "";
		str.append(d->name);
		if (d->description) {
			str.append(" (");
			str.append(d->description);
			str.append(")");
		}
		else {
			str.append(" (No description available)");
		}
		ui.comboBox->addItem(str);
	}

	ui.tableWidget->setColumnWidth(0, 50);
	ui.tableWidget->setColumnWidth(1, 75);
	ui.tableWidget->setColumnWidth(2, 75);
	ui.tableWidget->setColumnWidth(3, 150);
	ui.tableWidget->setColumnWidth(4, 150);
	ui.tableWidget->setColumnWidth(5, 100);
	ui.tableWidget->setColumnWidth(6, 75);
	ui.tableWidget->setColumnHidden(6, true);
	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.tableWidget->setAlternatingRowColors(true);
	ui.tableWidget->setStyleSheet("selection-background-color: #00FFFF");
	ui.stopButton->setDisabled(true);
	ui.clearButton->setDisabled(true);
	ui.menuBar->addAction("About", this, SLOT(about_clicked()));
	connect(ui.startButton, SIGNAL(clicked()), this, SLOT(startButton_clicked()));
	connect(ui.stopButton, SIGNAL(clicked()), this, SLOT(stopButton_clicked()));
	connect(ui.clearButton, SIGNAL(clicked()), this, SLOT(clearButton_clicked()));
	connect(ui.tableWidget, SIGNAL(cellClicked(int, int)), this, SLOT(tableRow_clicked(int, int)));
}

void ARP_Hunter::about_clicked()
{
	QMessageBox::information(NULL, "About", "This application was built for computer network course design.\n\nWeihao Long\n2019.09.09");
}

void ARP_Hunter::startButton_clicked()
{
	ui.startButton->setDisabled(true);
	ui.stopButton->setDisabled(false);
	adapterIndex = ui.comboBox->currentIndex();
	st = GetTickCount();
	threadFlag = true;
	listener = new ARP_Listener();
	thread = new QThread();
	connect(thread, SIGNAL(started()), listener, SLOT(listen()));
	connect(listener, SIGNAL(newItem(int, QString, QString, QString)), this, SLOT(updateTable(int, QString, QString, QString)));
	listener->moveToThread(thread);
	thread->start();
}

void ARP_Hunter::stopButton_clicked()
{
	ui.stopButton->setDisabled(true);
	ui.clearButton->setDisabled(false);
	threadFlag = false;
}

void ARP_Hunter::clearButton_clicked()
{
	ui.startButton->setDisabled(false);
	ui.clearButton->setDisabled(true);
	ui.tableWidget->setRowCount(0);
	ui.tableWidget->clearContents();
	ui.plainTextEdit->clear();
	ui.listWidget->clear();
}

void ARP_Hunter::tableRow_clicked(int x, int y)
{
	ui.plainTextEdit->clear();
	ui.listWidget->clear();
	char* frame = NULL;
	QByteArray ba = ui.tableWidget->item(x, 6)->text().toLatin1();
	frame = (char*)malloc(ba.length() + 1);
	memset(frame, 0, ba.length());
	memcpy(frame, ba.data(), ba.length());
	frame[ba.length()] = '\0';
	QString fmt_frame = "";
	for (int i = 0; frame[i] != '\0'; ++i) {
		if (i != 0) {
			if (1 % 16 == 0)
				fmt_frame.append('\n');
			else if (i % 2 == 0)
				fmt_frame.append(' ');
		}
		fmt_frame.append(frame[i]);
	}
	ui.plainTextEdit->appendPlainText(fmt_frame);
	QString str = NULL;
	ui.listWidget->addItem("< Ethernet >");
	str = "[ Destination ] ";
	for (int i = 0; i < 12; ++i) {
		if (i % 2 == 0 && i != 0)
			str.append(':');
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Source ] ";
	for (int i = 12; i < 24; ++i) {
		if (i % 2 == 0 && i != 12)
			str.append(':');
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Type ] 0x";
	for (int i = 24; i < 28; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	ui.listWidget->addItem("< ARP >");
	str = "[ Hardware type ] 0x";
	for (int i = 28; i < 32; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Protocol type ] 0x";
	for (int i = 32; i < 36; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Hardware size ] 0x";
	for (int i = 36; i < 38; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Protocol size ] 0x";
	for (int i = 38; i < 40; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Opcode ] 0x";
	for (int i = 40; i < 44; ++i) {
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Sender MAC address ] ";
	for (int i = 44; i < 56; ++i) {
		if (i % 2 == 0 && i != 44)
			str.append(':');
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Sender IP address ] ";
	for (int i = 56; i < 64; ++i) {
		if (i % 2 == 0 && i != 56)
			str.append('.');
		str.append(hex_to_dec(frame[i], frame[i + 1]));
		++i;
	}
	ui.listWidget->addItem(str);
	str = "[ Target MAC address ] ";
	for (int i = 64; i < 76; ++i) {
		if (i % 2 == 0 && i != 64)
			str.append(':');
		str.append(frame[i]);
	}
	ui.listWidget->addItem(str);
	str = "[ Target IP address ] ";
	for (int i = 76; i < 84; ++i) {
		if (i % 2 == 0 && i != 76)
			str.append('.');
		str.append(hex_to_dec(frame[i], frame[i + 1]));
		++i;
	}
	ui.listWidget->addItem(str);
}

void ARP_Hunter::updateTable(int len, QString src, QString des, QString frame)
{
	et = GetTickCount();
	int rows = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(rows);
	ui.tableWidget->setItem(rows, 0, new QTableWidgetItem(QString::number(rows + 1)));
	ui.tableWidget->setItem(rows, 1, new QTableWidgetItem(QString::number((et - st) / 1000.0, 'f', 3)));
	ui.tableWidget->setItem(rows, 2, new QTableWidgetItem(QString::number(len)));
	ui.tableWidget->setItem(rows, 3, new QTableWidgetItem(src));
	ui.tableWidget->setItem(rows, 4, new QTableWidgetItem(des));
	ui.tableWidget->setItem(rows, 5, new QTableWidgetItem("ARP"));
	ui.tableWidget->setItem(rows, 6, new QTableWidgetItem(frame));
	for (int i = 0; i < 7; ++i)
		ui.tableWidget->item(rows, i)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
}

void ARP_Listener::listen()
{
	// Jump to the selected adapter
	int i = 0;
	for (d = alldevs; i < adapterIndex; d = d->next, i += 1);

	// Open the adapter
	adhandle = pcap_open_live(d->name, 65536, 1, 1000, errbuf);

	// retrieve the packets
	int res = 0;
	while ((res = pcap_next_ex(adhandle, &header, &pkt_data)) >= 0 && threadFlag) {
		// timeout elapsed
		if (res == 0)
			continue;
		char frame[66666];
		char* tmp = frame;
		for (int i = 0; i < header->len; ++i) {
			sprintf(tmp, "%02X", pkt_data[i]);
			tmp += 2;
		}
		// ARP only
		if (frame[24] != '0' || frame[25] != '8' || frame[26] != '0' || frame[27] != '6')
			continue;
		char src[18];
		char des[18];
		int fix = 0;
		for (int i = 0; i < 17; ++i) {
			if ((i - 2) % 3 == 0) {
				src[i] = ':';
				des[i] = ':';
				fix += 1;
				continue;
			}
			src[i] = frame[i + 12 - fix];
			des[i] = frame[i - fix];
		}
		src[17] = des[17] = '\0';
		emit newItem(header->len, src, des, frame);
	}
}

QString ARP_Hunter::hex_to_dec(char c1, char c2) {
	int res = 0;
	if (c1 >= '0' && c1 <= '9')
		res = c1 - '0';
	else if (c1 >= 'A' && c1 <= 'F')
		res = c1 - 'A' + 10;
	else  if (c1 >= 'a' && c1 <= 'f')
		res = c1 - 'a' + 10;
	res *= 16;
	if (c2 >= '0' && c2 <= '9')
		res += c2 - '0';
	else if (c2 >= 'A' && c2 <= 'F')
		res += c2 - 'A' + 10;
	else if (c2 >= 'a' && c2 <= 'f')
		res += c2 - 'a' + 10;
	return QString::number(res, 10);
}
