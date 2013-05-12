#include "showresultwindow.h"

ShowResultWindow::ShowResultWindow(QMainWindow * parent) : QMainWindow (parent) {
    this->resize(350 , 70);

    DBManager dbManager ;
    QVector<Student> students = dbManager.getStudentList();
    QStringList studentsName ;
    foreach (Student temp, students ) {
        studentsName.append(QString (temp.getName()+ " " + temp.getFamily()));
    }

    stList = new QComboBox(this);
    stList->addItems(studentsName);
    stList->setGeometry(20,20,200,30);

    confirm = new QPushButton ("show result" , this);
    confirm->setGeometry(230 , 20 , 100 , 30);
    connect (confirm , SIGNAL (clicked ()) , this , SLOT (onConfirmClicked()));

    this->result = new Result ();

    dbManager.close();

}

void ShowResultWindow::onConfirmClicked(){
    DBManager dbManager ;
    QStringList temp = stList->currentText().split(' ');
    QSqlQuery studentQuery = dbManager.getQuery(
                QString("select id from students where name = '%1' and family = '%2'").arg(
                    temp[0],temp[1]));

    while (studentQuery.next()){
        result->setStudentID (QString::number(studentQuery.value(0).toInt()));
        this->result->show();
        break ;
    }
    dbManager.close();
    this->close();
}
