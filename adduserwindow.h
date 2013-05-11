#ifndef ADDUSERWINDOW_H
#define ADDUSERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>
#include <QCryptographicHash>
#include <QMessageBox>

#include "dbmanager.h"

class AddUserWindow : public QMainWindow {

Q_OBJECT

public:
    AddUserWindow(QMainWindow * parent = 0);
private slots:
    void onConfirmClicked () ;
private :
     QLineEdit*   username        ;
     QLineEdit*   password        ;
     QLineEdit*   conPassword     ;
     QLineEdit*   permission      ;

     QLabel*      usernameLabel   ;
     QLabel*      passwordLabel   ;
     QLabel*      conPasswordLabel;
     QLabel*      permissionLabel ;

     QPushButton* confirm         ;
};

#endif // ADDUSERWINDOW_H
