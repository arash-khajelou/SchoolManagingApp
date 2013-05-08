#include "enterform.h"


#include <QCryptographicHash>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSql>



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
    this->close();
    //reopen the next window
  }
}
bool EnterForm::isValid(QString user, QString pass)
{
    QString hashedPass = QString(QCryptographicHash::hash((pass.toStdString().c_str()),QCryptographicHash::Md5).toHex());
    QSqlDatabase database = QSqlDatabase::addDatabase ("QMYSQL3");
    database.setConnectOptions();
    database.setHostName("localhost") ;
    database.setDatabaseName("school");
    database.setUserName("root");
    database.setPassword("mysql123");

    if (database.open()){
        QSqlQuery query ;
        query.exec("select password from clerk where user_name = '" + user + "'");
        while(query.next())
            if (query.value(0) == hashedPass)
                return true ;
        return false ;
    }
    else
        qDebug() << "WTF !";
    return false ;
}
