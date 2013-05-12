#ifndef STUDENT_H
#define STUDENT_H

#include <QString>

class Student {
    int     grade      ;
    int     disipGrade ;
    QString name       ;
    QString family     ;
    int     classID    ;
    int     id         ;
public:
    Student();

    int     getGrade      () ;
    QString getName       () ;
    QString getFamily     () ;
    int     getClassID    () ;
    int     getID         () ;
    int     getDisipGrade () ;

    void setGrade      (int     );
    void setName       (QString );
    void setFamily     (QString );
    void setClassID    (int     );
    void setID         (int     );
    void setDisipGrade (int     );
};

#endif // STUDENT_H
