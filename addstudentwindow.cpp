#include "addstudentwindow.h"

AddStudentWindow::AddStudentWindow(QMainWindow * parent) : QMainWindow (parent) {
    this->resize(350 , 200);

    this->name = new QLineEdit (this);
    this->name->setGeometry(100 , 20 , 200 , 30);
}
