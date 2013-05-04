#ifndef ENTERFORM_H
#define ENTERFORM_H

#include <QDebug>

#include <QMainWindow>
#include <QTextEdit>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QString>


class EnterForm : public QMainWindow
{
Q_OBJECT
public :
  EnterForm(QWidget* parent = 0);
  virtual ~EnterForm();
  bool isValid (QString user , QString pass);

private slots :
  void clickedLogIn () ;

private :
  QLineEdit * userName ;
  QLineEdit * passWord ;
  QPushButton * logIn ;

};

#endif // ENTERFORM_H
