#include "managermenu.h"

ManagerMenu::ManagerMenu(QWidget * parent) : QWidget(parent)
{
    this->resize(180, 250);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(2);

    manageClass = new QPushButton("Manage classes", this);
    manageClass->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (manageClass , SIGNAL (clicked()) , this , SLOT (onManageClassClicked()));

    setDisiplineGrade = new QPushButton("Set disipline grade", this);
    setDisiplineGrade->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (setDisiplineGrade , SIGNAL (clicked ()) , this , SLOT (onSetDisiplineClicked()));

    addDelay = new QPushButton("Add delay", this);
    addDelay->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (addDelay , SIGNAL (clicked ()) , this , SLOT (onAddDelayClicked()));

    showResult = new QPushButton("Show student result", this);
    showResult->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (showResult , SIGNAL (clicked()) , this , SLOT (onShowResultClicked()));

    addStudent = new QPushButton("Add new student", this);
    addStudent->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (addStudent , SIGNAL (clicked()) , this , SLOT (onAddStudentClicked()));

    vbox->addWidget(manageClass);
    vbox->addWidget(setDisiplineGrade);
    vbox->addWidget(addDelay);
    vbox->addWidget(showResult);
    vbox->addWidget(addStudent);

    setLayout(vbox);
}

void ManagerMenu::onManageClassClicked () {
    manageClassWindow = new ManageClassWindow () ;
    manageClassWindow->show();
}
void ManagerMenu::onSetDisiplineClicked(){
    setDisiplineWindow = new SetDisiplineWindow () ;
    setDisiplineWindow->show();
}
void ManagerMenu::onAddDelayClicked(){
    addDelayWindow = new AddDelayWindow () ;
    addDelayWindow->show();
}
void ManagerMenu::onShowResultClicked(){
    showResultWindow = new ShowResultWindow () ;
    showResultWindow->show();
}
void ManagerMenu::onAddStudentClicked(){
    addStudentWindow = new AddStudentWindow () ;
    addStudentWindow->show();
}
