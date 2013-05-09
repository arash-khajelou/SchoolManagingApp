#include "stclass.h"

STClass::STClass()
{
}

QVector <Student> STClass::getStudentList(){
    return this->student ;
}

void STClass::setStudentList (QVector <Student> student){
   this->student = student ;
}
