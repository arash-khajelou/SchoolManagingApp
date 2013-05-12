#ifndef ADDDELAYWINDOW_H
#define ADDDELAYWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QCalendarWidget>
#include <QComboBox>
#include <QString>
#include <QStringList>
#include <QVector>
#include <QVBoxLayout>

#include "dbmanager.h"

class AddDelayWindow : public QMainWindow{

    Q_OBJECT
public:
    AddDelayWindow(QMainWindow * parent = 0);
private slots :
    void onCalendarClicked () ;
    void onConfirmClicked  () ;
private :
    QCalendarWidget * calendar     ;
    QComboBox*        students     ;
    QLineEdit*        selectedDate ;
    QPushButton*      confirm      ;
};

#endif // ADDDELAYWINDOW_H
