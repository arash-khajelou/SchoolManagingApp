#ifndef STUDENT_H
#define STUDENT_H

#include "human.h"

class Student : public Human
{
    int grade ;
public:
    Student();
    int getGrade () ;
    void setGrade (int grade );
};

#endif // STUDENT_H
