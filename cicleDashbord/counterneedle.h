#ifndef COUNTERNEEDLE_H
#define COUNTERNEEDLE_H

#include <QPainter>
#include <QWidget>

class CounterNeedle : public QWidget
{
public:
    CounterNeedle(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // COUNTERNEEDLE_H
