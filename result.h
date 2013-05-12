#ifndef RESULT_H
#define RESULT_H

#include <QMainWindow>
#include <QGroupBox>
#include <QString>
#include <QLabel>
#include <QTextBrowser>
#include <QListWidget>

#include "dbmanager.h"

class Result : public QMainWindow
{

    Q_OBJECT
public:
    Result(QMainWindow *parent = 0);

    QString getStudentID ();
    void setStudentID (QString);
    
private:
    QString     studentID;

    QGroupBox * mainBox ;

    QLabel*     nameLabel;
    QLabel*     familyLabel;
    QLabel*     classIDLable ;
    QLabel*     gradeLabel ;
    QLabel*     delayLabel ;
    QLabel*     disipLabel ;

    QTextBrowser* name ;
    QTextBrowser* family ;
    QTextBrowser* classID ;
    QTextBrowser* grade ;
    QTextBrowser* disip ;

    QListWidget* delay ;

};

#endif // RESULT_H
