#ifndef CALLDASHBOARD_H
#define CALLDASHBOARD_H

#include <QWidget>

namespace Ui {
class CallDashBoard;
}

class CallDashBoard : public QWidget
{
    Q_OBJECT

public:
    explicit CallDashBoard(QWidget *parent = nullptr);
    ~CallDashBoard();

private:
    Ui::CallDashBoard *ui;
};

#endif // CALLDASHBOARD_H
