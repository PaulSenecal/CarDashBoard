#ifndef AIGUILLE_H
#define AIGUILLE_H
#include <QWidget>

class Aiguille
{
    public:
        Aiguille();
        Q_OBJECT

    public slots:
        void setAngle(int newAngle);

    protected:
        void paintEvent(QPaintEvent *event);

    private slots:
        void rotateNeedle();

    private:
     int angle;
};

#endif // AIGUILLE_H
