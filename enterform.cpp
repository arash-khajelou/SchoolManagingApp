#include "enterform.h"

EnterForm::EnterForm(QWidget* parent): QMainWindow(parent)
{

    this->dbManager = DBManager();

    rootMenu    = new RootMenu();
    managerMenu = new ManagerMenu() ;

    this->setGeometry(500 , 350 , 300 ,150 );
    this->setWindowTitle("login");

    error = new QMessageBox(this);
    error->setWindowTitle("Wrong password");
    error->setText("probably you are not one of our clerks ... :D");


  userName = new QLineEdit (this);
  userName->setGeometry(50 , 20 , 200 , 30);

  passWord = new QLineEdit (this);
  passWord->setEchoMode(QLineEdit::Password);
  passWord->setGeometry(50 , 55 , 200 , 30);

  logIn = new QPushButton ("Login" , this);
  logIn->setDefault(true);
  logIn->setGeometry(120 , 90 , 60 , 30);
  connect(logIn , SIGNAL (clicked()) , this , SLOT (clickedLogIn()));

  this->setTabOrder(this , userName);
  this->setTabOrder(userName , passWord);
  this->setTabOrder(passWord , logIn);
  this->setTabOrder(logIn , userName);
}
EnterForm::~EnterForm()
{

}
void EnterForm::clickedLogIn() {
    int permission = -1 ;
  if (isValid(userName->text() , passWord->text(),permission)){
    this->close();
    // openning new window ...
    switch (permission) {
    case 0 :
        //root user loged in
        qDebug() << "root loged in" << endl ;
        rootMenu->show();
        break ;
    case 1 :
        //manager user loged in
        qDebug() << "manager loged in" << endl ;
        managerMenu->show();
        break ;
    case 2 :
        //teacher user loged in
        qDebug () << "teacher loged in" << endl ;
        break ;
    }

  }
  else
    error->show();
}
bool EnterForm::isValid(QString user, QString pass , int& permission)
{
    QString hashedPass = QString(QCryptographicHash::hash((pass.toStdString().c_str()),QCryptographicHash::Md5).toHex());
    QSqlQuery query ;
    query = dbManager.getQuery("select password,permission from clerk where user_name = '" + user + "'");
    while(query.next())
        if (query.value(0) == hashedPass){
            permission = query.value(1).toInt();
            return true ;
        }
        else {
            return false ;
        }
    return false ;
}
