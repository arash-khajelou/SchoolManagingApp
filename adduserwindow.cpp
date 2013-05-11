#include "adduserwindow.h"

AddUserWindow::AddUserWindow(QMainWindow * parent) : QMainWindow (parent) {

    this->resize(400 , 200);

    this->usernameLabel = new QLabel ("user name" , this) ;
    this->usernameLabel->setGeometry(20 , 30 , 120 , 20);

    this->passwordLabel = new QLabel ("password" , this) ;
    this->passwordLabel->setGeometry(20 , 60 , 120 , 20);

    this->conPasswordLabel = new QLabel ("confirm password", this);
    this->conPasswordLabel->setGeometry(20 , 90 , 120 , 20);

    this->permissionLabel = new QLabel ("user permission" , this);
    this->permissionLabel->setGeometry(20 , 120 , 120 , 20);


    this->username = new QLineEdit (this) ;
    this->username->setGeometry(150 , 30 , 230 , 30);

    this->password = new QLineEdit (this) ;
    this->password->setEchoMode(QLineEdit::Password);
    this->password->setGeometry(150 , 60 , 230 , 30);

    this->conPassword = new QLineEdit (this) ;
    this->conPassword->setEchoMode(QLineEdit::Password);
    this->conPassword->setGeometry(150 , 90 , 230 , 30);

    this->permission = new QLineEdit ("0->root ,1->manager ,2->teacher" , this);
    this->permission->setGeometry(150 , 120 , 230 , 30);

    this->confirm = new QPushButton ("Confirm" , this);
    this->confirm->setGeometry(320,150,60,30);
    connect (confirm , SIGNAL (clicked()), this , SLOT (onConfirmClicked()));

}

void AddUserWindow::onConfirmClicked() {

    DBManager dbManager ;
    QString command = QString ("select * from clerk where user_name = '%1'").arg(this->username->text());
    QSqlQuery query = dbManager.getQuery(command);

    query.next();
    if (query.isValid()){
        qDebug() << "u can not create user" ;
        QMessageBox * warning = new QMessageBox (this );
        warning->setWindowTitle("invalid usernam");
        warning->setText("entered user name is currently valid in the database");
        warning->show();
    }
    else{
        qDebug () << "u can create user";
        if (password->text() == conPassword->text()){
            dbManager.executeCommand(
                        QString("insert into clerk values (%1 , '%2' , '%3')").arg(
                            permission->text() , username->text() ,
                            QString(QCryptographicHash::hash((password->text().toStdString().c_str())
                                                             ,QCryptographicHash::Md5).toHex())));
            dbManager.close();
            this->close () ;
        }
        else {
            QMessageBox * warning = new QMessageBox (this) ;
            warning->setWindowTitle("non equal password");
            warning->setText("entered password in confirm password is not equal to ur first password");
            warning->show();
        }
    }
}
