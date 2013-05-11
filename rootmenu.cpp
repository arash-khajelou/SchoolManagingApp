#include "rootmenu.h"

RootMenu::RootMenu(QWidget * parent) : QWidget(parent)
{
    this->resize(200, 300);
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

    addUser = new QPushButton("Add new user" , this);
    addUser->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    connect (addUser , SIGNAL (clicked()) , this , SLOT (onAddUserClicked()));

    vbox->addWidget(manageClass);
    vbox->addWidget(setDisiplineGrade);
    vbox->addWidget(addDelay);
    vbox->addWidget(showResult);
    vbox->addWidget(addStudent);
    vbox->addWidget(addUser);

    setLayout(vbox);
}

void RootMenu::onManageClassClicked () {
    manageClassWindow = new ManageClassWindow () ;
    manageClassWindow->show();
}
void RootMenu::onSetDisiplineClicked(){
    setDisiplineWindow = new SetDisiplineWindow () ;
    setDisiplineWindow->show();
}
void RootMenu::onAddDelayClicked(){
    addDelayWindow = new AddDelayWindow () ;
    addDelayWindow->show();
}
void RootMenu::onShowResultClicked(){
    showResultWindow = new ShowResultWindow () ;
    showResultWindow->show();
}
void RootMenu::onAddStudentClicked(){
    addStudentWindow = new AddStudentWindow () ;
    addStudentWindow->show();
}
void RootMenu::onAddUserClicked(){
    addUserWindow = new AddUserWindow ();
    addUserWindow->show();
}
