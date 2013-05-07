#include "enterform.h"



EnterForm::EnterForm(QWidget* parent): QMainWindow(parent)
{
    this->setGeometry(500 , 350 , 300 ,150 );
    this->setWindowTitle("login");

  userName = new QLineEdit (this);
  userName->setGeometry(50 , 20 , 200 , 30);

  passWord = new QLineEdit (this);
  passWord->setEchoMode(QLineEdit::Password);
  passWord->setGeometry(50 , 55 , 200 , 30);

  logIn = new QPushButton ("Login" , this);
  logIn->setDefault(true);
  logIn->setGeometry(120 , 90 , 60 , 30);
  connect(logIn , SIGNAL (clicked()) , this , SLOT (clickedLogIn()));
  //connect(this , SIGNAL(
  this->setTabOrder(this , userName);
  this->setTabOrder(userName , passWord);
  this->setTabOrder(passWord , logIn);
  this->setTabOrder(logIn , userName);
}
EnterForm::~EnterForm()
{

}
void EnterForm::clickedLogIn() {
  if (isValid(userName->text() , passWord->text())){
    qDebug()<<"we can open new page with username :" << userName->text()
    <<" and passWord :" << passWord->text();
    //reopen the next window
    this->close();
  }
}
bool EnterForm::isValid(QString user, QString pass)
{
  if (true){
  return true ;
  }
  else
    return false ;
}
