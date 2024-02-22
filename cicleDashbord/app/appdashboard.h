#ifndef APPDASHBOARD_H
#define APPDASHBOARD_H

#include <QWidget>

namespace Ui {
class AppDashBoard;
}

class AppDashBoard : public QWidget
{
    Q_OBJECT

public:
    explicit AppDashBoard(QWidget *parent = nullptr);
    ~AppDashBoard();

private:
    Ui::AppDashBoard *ui;
};

#endif // APPDASHBOARD_H
