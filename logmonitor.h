#ifndef LOGMONITOR_H
#define LOGMONITOR_H

#include <QWidget>

namespace Ui {
class LogMonitor;
}

class LogMonitor : public QWidget
{
    Q_OBJECT

public:
    explicit LogMonitor(QWidget *parent = 0);
    ~LogMonitor();

private:
    Ui::LogMonitor *ui;
};

#endif // LOGMONITOR_H
