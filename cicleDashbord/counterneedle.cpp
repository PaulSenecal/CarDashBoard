#include "counterneedle.h"

CounterNeedle::CounterNeedle(QWidget *parent)
{

}
void CounterNeedle::paintEvent(QPaintEvent *)
//! [8] //! [10]
{
    static const QPoint minuteHand[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -70)
    };

    QColor minuteColor(0, 127, 127, 191);

    int side = qMin(width(), height());
    //QTime time = QTime::currentTime();

    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);

    painter.translate(width() / 2, height() / 2);

    painter.scale(side / 200.0, side / 200.0);

    painter.setPen(Qt::NoPen);

    painter.save();

    painter.rotate(30.0 * ((10 + 10 / 60.0)));

    painter.restore();

    for (int i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }

    painter.setPen(Qt::NoPen);

    painter.setBrush(minuteColor);


    painter.save();
    painter.rotate(6.0 * (10 + 10 / 60.0));
    painter.drawConvexPolygon(minuteHand, 3);
    painter.restore();

    painter.setPen(minuteColor);

}
