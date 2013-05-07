#include "dbmanager.h"

DBManager::DBManager()
{
    dataBase = QSqlDatabase::addDatabase ("QMYSQL3");
    dataBase.setConnectOptions();
    dataBase.setHostName("localhost") ;
    dataBase.setDatabaseName("school"); // define school db user in mysql ...!
    dataBase.setUserName("root");
    dataBase.setPassword("mysql123");
}
