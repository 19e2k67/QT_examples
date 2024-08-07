#include "widget.h"
#include "ui_widget.h"
#include <QAbstractSocket>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("客户端");
    ui->pushButton_2->setEnabled(false);
    tcpSocket = new QTcpSocket(this);
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
    connect(tcpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(mStateChanged(QAbstractSocket::SocketState)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::receiveMessage()
{
    ui->textBrowser->append("服务端: " + tcpSocket->readAll());
}

void Widget::mStateChanged(QAbstractSocket::SocketState state)
{
    switch(state)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textBrowser->append("(客户端:)与服务端断开连接");
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(false);
        break;
    case QAbstractSocket::ConnectedState:
        ui->textBrowser->append("(客户端:)已连接服务端");
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(true);
        break;
    default:
        break;
    }
}

void Widget::on_pushButton_3_clicked()
{
    if(tcpSocket->state() == QAbstractSocket::ConnectedState)
    {
        tcpSocket->write(ui->lineEdit->text().toUtf8());
        ui->textBrowser->append("客户端->服务端 " + ui->lineEdit->text());
    }

    else
        ui->textBrowser->append("(客户端:)请先与服务端连接!");
}


void Widget::on_pushButton_clicked()
{
    ui->textBrowser->append("客户端:监听的IP地址和端口: 192.168.3.30 8080");
    tcpSocket->connectToHost(QHostAddress("192.168.3.30"), 8080);
}


void Widget::on_pushButton_2_clicked()
{
    tcpSocket->disconnectFromHost();
}

