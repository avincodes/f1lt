#ifndef DELAYWIDGET_H
#define DELAYWIDGET_H

#include <QWidget>

namespace Ui {
class DelayWidget;
}

class DelayWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit DelayWidget(QWidget *parent = 0);
    ~DelayWidget();

signals:
    void delayChanged(int previousDelay, int delay);

public slots:
    void synchronizingTimer(bool);
    
private slots:

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::DelayWidget *ui;
    int delay;
};

#endif // DELAYWIDGET_H
