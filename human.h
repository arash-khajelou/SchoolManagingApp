#ifndef HUMAN_H
#define HUMAN_H

#include <QString>

class Human
{
    QString name ;
    QString family;
    int age ;
public:
    Human(QString , QString , int) ;
    ~Human ();

    QString getName () ;
    QString getFamily ();
    int getAge () ;

    void setName (QString );
    void setFamily (QString );
    void setAge (int) ;
};

#endif // HUMAN_H
