#include "setdisiplinewindow.h"

SetDisiplineWindow::SetDisiplineWindow(QMainWindow * parent) : QMainWindow (parent) {

    this->resize(400 , 110);
    DBManager dbManager ;
    QVector<Student> students = dbManager.getStudentList();
    QStringList studentsName ;
    foreach (Student temp, students ) {
        studentsName.append(QString (temp.getName()+ " " + temp.getFamily())
                            + QString(" (disipline grade : %1)").arg(QString::number(temp.getDisipGrade())));
    }
    dbManager.close();
    stList = new QComboBox (this);
    stList->setGeometry(20 ,20 , 300 , 30);
    stList->addItems(studentsName);

    grade = new QLineEdit (this);
    grade->setGeometry(320 , 20 , 60 , 30);
    grade->setText("grade");

    confirm = new QPushButton ("Confirm" , this);
    confirm->setGeometry(320 , 60 , 60 , 30);
    connect (confirm , SIGNAL (clicked ()) , this , SLOT (onConfirmClicked()));
}

void SetDisiplineWindow::onConfirmClicked(){
    DBManager dbManager ;
    QStringList temp = stList->currentText().split(' ');
    QSqlQuery studentQuery = dbManager.getQuery(
                QString("select id from students where name = '%1' and family = '%2'").arg(
                    temp[0],temp[1]));
    studentQuery.next();
    dbManager.executeCommand(QString("update disipline_grade set grade=%1 where id=%2").arg(
                                 grade->text(),
                                 QString::number(studentQuery.value(0).toInt())));
    dbManager.close();
    this->close();
}
