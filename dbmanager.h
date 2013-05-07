#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>
#include <QSqlQuery>

#include <QDebug>

class DBManager
{
private:
    QSqlDatabase dataBase ;
    QSqlQuery query ;
public:
    DBManager();
    ~DBManager(){}


};

#endif // DBMANAGER_H
