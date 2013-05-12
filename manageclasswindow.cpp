#include "manageclasswindow.h"

ManageClassWindow::ManageClassWindow(QMainWindow * parent ) : QMainWindow (parent) {
    this->resize(350 , 110);
    DBManager dbManager ;
    QVector<Student> students = dbManager.getStudentList();
    QStringList studentsName ;
    foreach (Student temp, students ) {
        studentsName.append(QString (temp.getName()+ " " + temp.getFamily())
                            + QString(" (class %1)").arg(QString::number(temp.getClassID())));
    }
    dbManager.close();
    stList = new QComboBox (this);
    stList->setGeometry(20 ,20 , 200 , 30);
    stList->addItems(studentsName);

    clList = new QComboBox (this);
    clList->setGeometry(230 , 20 , 100 , 30);
    clList->addItem("class 1");
    clList->addItem("class 2");
    clList->addItem("class 3");

    confirm = new QPushButton ("Confirm" , this);
    confirm->setGeometry(270 , 60 , 60 , 30);
    connect (confirm , SIGNAL (clicked ()) , this , SLOT (onConfirmClicked()));

}

void ManageClassWindow::onConfirmClicked(){
    DBManager dbManager ;
    QStringList temp = stList->currentText().split(' ');
    dbManager.executeCommand(
                QString ("update students set class_id=%1 where name = '%2' and family = '%3'").arg(
                    QString::number(clList->currentIndex()+1),temp[0],temp[1]));
    dbManager.close();
    this->close();
}
