#include "result.h"

Result::Result(QMainWindow *parent) : QMainWindow(parent) {

    this->resize(560 , 240);

    mainBox = new QGroupBox (QString("Student ID : "+studentID), this);
    mainBox->setGeometry(10 , 10 , 580 , 200);

    nameLabel = new QLabel ("Name  :" , this);
    nameLabel->setGeometry(30 , 50 ,67 , 17);

    familyLabel = new QLabel ("Family :" , this);
    familyLabel->setGeometry(30 , 90 ,67 , 17);

    classIDLable = new QLabel ("ClassID:" , this);
    classIDLable->setGeometry(30 , 130 ,67 , 17);

    gradeLabel = new QLabel ("Grade :" , this);
    gradeLabel->setGeometry(30 , 170 ,67 , 17);

    delayLabel = new QLabel ("Delay calendar  :" , this);
    delayLabel->setGeometry(200 , 50 , 110 , 17);

    disipLabel = new QLabel ("Disipline grade :" , this);
    disipLabel->setGeometry(200 , 170 , 110 , 17);

    name = new QTextBrowser(this);
    name->setGeometry(90 , 40 , 100 , 30);

    family = new QTextBrowser (this);
    family->setGeometry(90 , 80 , 100 , 30);

    classID = new QTextBrowser (this);
    classID->setGeometry(90 , 120 , 100 ,30);

    grade = new QTextBrowser (this);
    grade->setGeometry(90 , 160 , 100 ,30 );

    disip = new QTextBrowser (this);
    disip->setGeometry(320 , 160 , 210 , 30);

    delay = new QListWidget (this);
    delay->setGeometry(320 , 40 ,210 , 110);

}

QString Result::getStudentID(){
    return this->studentID;
}
void Result::setStudentID(QString id){
    this->studentID = id ;
    this->mainBox->setTitle(QString("Student ID : "+studentID));


    ////////////////////// DB /////////////////////////////////

    DBManager dbManager ;
    QSqlQuery query = dbManager.getQuery(QString("select name , family , class_id , grade from students where id = %1").arg(
                                 studentID));
    while (query.next()){
        name->setText(query.value(0).toString());
        family->setText(query.value(1).toString());
        classID->setText(query.value(2).toString());
        grade->setText(query.value(3).toString());
    }

    query = dbManager.getQuery(QString("select delay_date from calendar where st_id = %1").arg(studentID));
    while (query.next()){
        delay->addItem(query.value(0).toString());
    }

    query = dbManager.getQuery(QString("select grade from disipline_grade where id = %1").arg(studentID));
    while (query.next()){
        disip->setText(query.value(0).toString());
    }

    ////////////////// end of DB //////////////////////////////

}
