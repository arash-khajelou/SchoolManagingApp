#include "teachermenu.h"

TeacherMenu::TeacherMenu(QWidget * parent) : QWidget (parent) {
    this->resize(200, 300);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(2);

    showResult = new QPushButton("Show student result", this);
    showResult->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect (showResult , SIGNAL (clicked ()) , this , SLOT (onShowResultClicked()));

    listOfStudents = new QPushButton("Show list of student");
    listOfStudents->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    connect (listOfStudents , SIGNAL (clicked ()) , this , SLOT (onListOfStudentsClicked()));

    setStudentGrade = new QPushButton("Set student grade" , this) ;
    setStudentGrade->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);
    connect (setStudentGrade , SIGNAL (clicked ()) , this , SLOT (onSetStudentGradeClicked()));

    vbox->addWidget(showResult);
    vbox->addWidget(listOfStudents);
    vbox->addWidget(setStudentGrade);

    setLayout(vbox);

}

void TeacherMenu::onShowResultClicked(){
    showResultWindow = new ShowResultWindow () ;
    showResultWindow->show();
}
void TeacherMenu::onSetStudentGradeClicked(){
    setStudentGradeWindow = new SetStudentGradeWindow ();
    setStudentGradeWindow->show();
}
void TeacherMenu::onListOfStudentsClicked(){
    listOfStudentsWindow = new ListOfStudentsWindow ();
    listOfStudentsWindow->show();
}
