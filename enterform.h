#ifndef ENTERFORM_H
#define ENTERFORM_H

#include <QDebug>

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QString>
#include <QCryptographicHash>
#include <QMessageBox>


#include "dbmanager.h"
#include "rootmenu.h"
#include "managermenu.h"
#include "teachermenu.h"

class EnterForm : public QMainWindow
{
Q_OBJECT
public :
  EnterForm(QWidget* parent = 0);
  virtual ~EnterForm();
  bool isValid (QString user , QString pass , int& permission);

private slots :
  void clickedLogIn () ;

private :
  QLineEdit * userName ;
  QLineEdit * passWord ;
  QPushButton * logIn ;
  QMessageBox * error ;

  DBManager dbManager ;

  RootMenu * rootMenu ;
  ManagerMenu * managerMenu ;
  TeacherMenu * teacherMenu ;
};

#endif // ENTERFORM_H
