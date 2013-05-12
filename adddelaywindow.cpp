#include "adddelaywindow.h"

AddDelayWindow::AddDelayWindow(QMainWindow * parent ) : QMainWindow (parent){
    this->resize(340 , 420);

    DBManager dbManager ;
    QVector<Student> stVecList = dbManager.getStudentList() ;
    QStringList stQStrList ;
    foreach (Student temp , stVecList){

        int i = 0 ;
        QSqlQuery query = dbManager.getQuery(QString("select * from calendar where st_id=%1").arg(
                                                 QString::number(temp.getID())));
        while (query.next()){
            if (query.isValid()){
                i++ ;
            }
        }
        stQStrList.append(QString(temp.getName()+" "+temp.getFamily()+
                                  QString(" with %1 times of delay").arg(
                                      QString::number(i))));
    }
    dbManager.close();
    students = new QComboBox(this);
    students->addItems(stQStrList);
    students->setGeometry(20 , 20 , 300 , 30);

    calendar = new QCalendarWidget (this);
    calendar->setGeometry(20 ,60 ,300 ,300 );
    connect (calendar , SIGNAL(selectionChanged()), this , SLOT (onCalendarClicked())) ;

    selectedDate = new QLineEdit (this);
    selectedDate->setText(calendar->selectedDate().toString());
    selectedDate->setGeometry(20 , 370 , 200 , 30);

    confirm = new QPushButton ("Add delay" , this);
    confirm->setGeometry(230 , 370 , 90 , 30);
    connect (confirm , SIGNAL (clicked()) , this , SLOT (onConfirmClicked()));
}

void AddDelayWindow::onCalendarClicked(){
    selectedDate->setText(calendar->selectedDate().toString());
}

void AddDelayWindow::onConfirmClicked(){
    DBManager dbManager ;
    QStringList temp = students->currentText().split(' ');
    QSqlQuery studentQuery = dbManager.getQuery(
                QString("select id from students where name = '%1' and family = '%2'").arg(
                    temp[0],temp[1]));
    studentQuery.next();
    dbManager.executeCommand(QString("insert into calendar values (%1 , '%2-%3-%4')").arg(
                                 QString::number(studentQuery.value(0).toInt()),
                                 QString::number(calendar->selectedDate().year()),
                                 QString::number(calendar->selectedDate().month()),
                                 QString::number(calendar->selectedDate().day())));
    dbManager.close();
    this->close();
}
