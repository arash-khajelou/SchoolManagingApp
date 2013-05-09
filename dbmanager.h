#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "student.h"

#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QVector>

class DBManager
{
    QSqlDatabase database ;
public:
    DBManager();

    void close () ;
    QVector <Student> getStudentList () ;
    QSqlQuery getQuery (QString) ;
    void executeCommand (QString) ;
};

#endif // DBMANAGER_H
