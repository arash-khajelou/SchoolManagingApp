#include "dbmanager.h"

DBManager::DBManager()
{
    this->database = QSqlDatabase::addDatabase ("QMYSQL3");
    this->database.setConnectOptions();
    this->database.setHostName("localhost") ;
    this->database.setPort(3306);
    this->database.setDatabaseName("school");
    this->database.setUserName("root");
    this->database.setPassword("mysql123");

    if (!this->database.open()){
        qDebug() << "WTF !";
    }
}
void DBManager::close(){
    database.commit();
    database.close() ;
}

QVector <Student> DBManager::getStudentList(){
    QSqlQuery query ;
    QVector <Student> res ;
    query.exec("select * from students");
    while (query.next()){
        Student temp ;
        temp.setID(query.value(0).toInt());
        temp.setClassID(query.value(1).toInt());
        temp.setName(query.value(2).toString());
        temp.setFamily(query.value(3).toString());
        temp.setGrade(query.value(4).toInt());
        res.append(temp);
    }
    return res ;
}
QSqlQuery DBManager::getQuery (QString command){
    QSqlQuery res ;
    res.exec(command);
    return res ;
}
void DBManager::executeCommand(QString command){
    database.exec(command);
}
