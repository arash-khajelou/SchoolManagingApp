#ifndef SETSTUDENTGRADEWINDOW_H
#define SETSTUDENTGRADEWINDOW_H

#include <QMainWindow>

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QStringList>
#include <QLineEdit>

#include "dbmanager.h"

class SetStudentGradeWindow : public QMainWindow {

    Q_OBJECT
public:
    SetStudentGradeWindow(QMainWindow * parent = 0);
private slots :
    void onConfirmClicked () ;
private :
    QComboBox*   stList ;
    QLineEdit*   grade  ;
    QPushButton* confirm ;
};

#endif // SETSTUDENTGRADEWINDOW_H
