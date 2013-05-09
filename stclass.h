#ifndef STCLASS_H
#define STCLASS_H

#include <QVector>

#include "student.h"

class STClass
{
    QVector <Student> student ;

public:
    STClass();
    QVector <Student> getStudentList () ;

    void setStudentList (QVector <Student>);
};

#endif // STCLASS_H
