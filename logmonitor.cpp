#include "logmonitor.h"
#include "ui_logmonitor.h"

LogMonitor::LogMonitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogMonitor)
{
    ui->setupUi(this);
}

LogMonitor::~LogMonitor()
{
    delete ui;
}
