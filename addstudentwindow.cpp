#include "addstudentwindow.h"

AddStudentWindow::AddStudentWindow(QMainWindow * parent) : QMainWindow (parent) {
    this->resize(400 , 170);

    this->nameLabel = new QLabel ("Student name" , this);
    this->nameLabel->setGeometry(20 , 20 , 100 , 30);

    this->familyLabel = new QLabel ("Student family" , this);
    this->familyLabel->setGeometry(20 , 50 , 100 , 30);

    this->classIDLabel = new QLabel ("Class id" , this );
    this->classIDLabel->setGeometry(20 , 80 , 100 , 30);

    this->name = new QLineEdit (this);
    this->name->setGeometry(130 , 20 , 250 , 30);

    this->family = new QLineEdit (this);
    this->family->setGeometry(130 , 50 , 250 , 30);

    this->classID = new QLineEdit (this );
    this->classID->setGeometry(130 , 80 , 250 , 30);

    this->confirm = new QPushButton ("Confirm" , this);
    this->confirm->setGeometry(320,120 ,60 , 30);
    connect (this->confirm , SIGNAL (clicked ()) , this , SLOT (onConfirmClicked()));
}

void AddStudentWindow::onConfirmClicked(){
    DBManager dbManager ;
    dbManager.executeCommand(
                QString("insert into students (class_id , name , family , grade) values (%1 , '%2' , '%3' , 0)").arg(this->classID->text() ,
                                                                this->name->text() ,
                                                                this->family->text()));
    dbManager.close();
    this->close();
}
