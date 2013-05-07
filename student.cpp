#include "student.h"

Student::Student(): Human ("no name" , "no family" , -1)
{
}
int Student::getGrade(){
    return this->grade;
}
void Student::setGrade(int grade){
    this->grade = grade ;
}
