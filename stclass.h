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
};

#endif // STCLASS_H
