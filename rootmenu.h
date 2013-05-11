#ifndef ROOTMENU_H
#define ROOTMENU_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <QString>
#include <QDebug>

#include "adduserwindow.h"
#include "addstudentwindow.h"
#include "adddelaywindow.h"
#include "showresultwindow.h"
#include "manageclasswindow.h"
#include "setdisiplinewindow.h"

class RootMenu : public QWidget {

Q_OBJECT

public :
    RootMenu(QWidget * parent = 0);
private slots :
    void onManageClassClicked () ;
    void onSetDisiplineClicked () ;
    void onAddDelayClicked () ;
    void onShowResultClicked () ;
    void onAddStudentClicked () ;
    void onAddUserClicked () ;
private :
    QPushButton* manageClass       ;
    QPushButton* setDisiplineGrade ;
    QPushButton* addDelay          ;
    QPushButton* showResult        ;
    QPushButton* addStudent        ;
    QPushButton* addUser           ;

    AddUserWindow      *addUserWindow     ;
    AddStudentWindow   *addStudentWindow  ;
    AddDelayWindow     *addDelayWindow    ;
    ShowResultWindow   *showResultWindow  ;
    SetDisiplineWindow *setDisiplineWindow;
    ManageClassWindow  *manageClassWindow ;

};

#endif // ROOTMENU_H
