#ifndef ADDDELAYWINDOW_H
#define ADDDELAYWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QCalendarWidget>

#include "dbmanager.h"

class AddDelayWindow : public QMainWindow{

    Q_OBJECT
public:
    AddDelayWindow(QMainWindow * parent = 0);
private slots :
private :
    QCalendarWidget * calender ;

};

#endif // ADDDELAYWINDOW_H
