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
    void onConfirmClicked ();
private :
    QLineEdit * name ;
    QLineEdit * family ;
    QLineEdit * classID ;

    QLabel * nameLabel ;
    QLabel * familyLabel ;
    QLabel * classIDLabel ;

    QPushButton * confirm ;
};

#endif // ADDSTUDENTWINDOW_H
