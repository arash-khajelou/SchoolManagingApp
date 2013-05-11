#include "teachermenu.h"

TeacherMenu::TeacherMenu(QWidget * parent) : QWidget (parent) {
    this->resize(200, 300);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setSpacing(2);

    showResult = new QPushButton("Show student result", this);
    showResult->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    listOfStudents = new QPushButton("Show list of student");
    listOfStudents->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);

    setStudentGrade = new QPushButton("Set student grade" , this) ;
    setStudentGrade->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);

    addUser = new QPushButton("Add new user" , this);
    addUser->setSizePolicy(QSizePolicy::Expanding , QSizePolicy::Expanding);

    vbox->addWidget(showResult);
    vbox->addWidget(listOfStudents);
    vbox->addWidget(setStudentGrade);
    vbox->addWidget(addUser);

    setLayout(vbox);

}
