#ifndef ADDSTUDENTWINDOW_H
#define ADDSTUDENTWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QMessageBox>

#include "dbmanager.h"

class AddStudentWindow : public QMainWindow {

Q_OBJECT

public:
    AddStudentWindow(QMainWindow * parent = 0 );
private slots:
private :
    QLineEdit * name ;
    QLineEdit * family ;

    QLabel * nameLabel ;
    QLabel * familyLabel ;

    QPushButton * confirm ;
};

#endif // ADDSTUDENTWINDOW_H
