#include "student.h"

Student::Student()
{
}
int Student::getGrade(){
    return this->grade;
}
QString Student::getName(){
    return this->name ;
}
QString Student::getFamily(){
    return this->family ;
}
int Student::getClassID(){
    return this->classID;
}
int Student::getID () {
    return this->id ;
}

void Student::setGrade(int grade){
    this->grade = grade ;
}
void Student::setFamily(QString family){
    this->family = family ;
}
void Student::setName(QString name ) {
    this->name = name ;
}
void Student::setClassID(int classID){
    this->classID = classID ;
}
void Student::setID (int id ) {
    this->id = id ;
}
