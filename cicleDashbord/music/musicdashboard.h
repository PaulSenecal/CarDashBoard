#ifndef MUSICDASHBOARD_H
#define MUSICDASHBOARD_H

#include <QWidget>

namespace Ui {
class MusicDashBoard;
}

class MusicDashBoard : public QWidget
{
    Q_OBJECT

public:
    explicit MusicDashBoard(QWidget *parent = nullptr);
    ~MusicDashBoard();

private slots:
    void on_homeButton_clicked();

private:
    Ui::MusicDashBoard *ui;
};

#endif // MUSICDASHBOARD_H
