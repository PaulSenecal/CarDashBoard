#ifndef SETTINGDASHBOARD_H
#define SETTINGDASHBOARD_H

#include <QWidget>

namespace Ui {
class SettingDashBoard;
}

class SettingDashBoard : public QWidget
{
    Q_OBJECT

public:
    explicit SettingDashBoard(QWidget *parent = nullptr);
    ~SettingDashBoard();

private:
    Ui::SettingDashBoard *ui;
};

#endif // SETTINGDASHBOARD_H
