/********************************************************************************
** Form generated from reading UI file 'musicdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICDASHBOARD_H
#define UI_MUSICDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicDashBoard
{
public:

    void setupUi(QWidget *MusicDashBoard)
    {
        if (MusicDashBoard->objectName().isEmpty())
            MusicDashBoard->setObjectName("MusicDashBoard");
        MusicDashBoard->resize(400, 300);

        retranslateUi(MusicDashBoard);

        QMetaObject::connectSlotsByName(MusicDashBoard);
    } // setupUi

    void retranslateUi(QWidget *MusicDashBoard)
    {
        MusicDashBoard->setWindowTitle(QCoreApplication::translate("MusicDashBoard", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicDashBoard: public Ui_MusicDashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICDASHBOARD_H
