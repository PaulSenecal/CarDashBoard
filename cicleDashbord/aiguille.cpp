#include "aiguille.h"
#include <QPainter>
#include <QTimer>
#include <QSlider>
#include <QVBoxLayout>

Aiguille::Aiguille() : angle(0)
{
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(0, 360);

    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(setAngle(int)));

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(slider);
    setLayout(layout);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(rotateNeedle()));
    timer->start(100); // Changez la période selon vos besoins
}

void Aiguille::setAngle(int newAngle)
{
    angle = newAngle;
    update();
}

void Aiguille::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    double radius = 0.95 * (qMin(width(), height()) / 2);

    int centerX = width() / 2;
    int centerY = height() / 2;

    painter.translate(centerX, centerY);
    painter.rotate(angle);

    // Dessinez l'aiguille (par exemple, un rectangle)
    int needleLength = radius * 0.8;
    int needleWidth = 10;

    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::red);
    painter.drawRect(-needleWidth / 2, 0, needleWidth, -needleLength);
}

void Aiguille::rotateNeedle()
{
    // Cette fonction ne fait rien car l'angle est maintenant déterminé par l'utilisateur.
}
