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

    addDelay = new QPushButton("Add delay", this);
    addDelay->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    showResult = new QPushButton("Show student result", this);
    showResult->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    addStudent = new QPushButton("Add new student", this);
    addStudent->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox->addWidget(manageClass);
    vbox->addWidget(setDisiplineGrade);
    vbox->addWidget(addDelay);
    vbox->addWidget(showResult);
    vbox->addWidget(addStudent);

    setLayout(vbox);
}

void ManagerMenu::onManageClassClicked () {
    this->close();
    qDebug()<< "1" << endl ;
}
