#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student {
    int     grade   ;
    QString name    ;
    QString family  ;
    int     classID ;
    int     id      ;
public:
    Student();

    int     getGrade   () ;
    QString getName    () ;
    QString getFamily  () ;
    int     getClassID () ;
    int     getID      () ;

    void setGrade  (int grade );
    void setName   (QString   );
    void setFamily (QString   );
    void setClassID(int       );
    void setID     (int       );
};

#endif // STUDENT_H
