#ifndef ROOTMENU_H
#define ROOTMENU_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <QString>
#include <QDebug>

#include "adduserwindow.h"

class RootMenu : public QWidget {

Q_OBJECT

public :
    RootMenu(QWidget * parent = 0);
private slots :
    void onManageClassClicked () ;

    void onAddUserClicked () ;
private :
    QPushButton* manageClass       ;
    QPushButton* setDisiplineGrade ;
    QPushButton* addDelay          ;
    QPushButton* showResult        ;
    QPushButton* addStudent        ;
    QPushButton* addUser           ;

    AddUserWindow * addUserWindow  ;
};

#endif // ROOTMENU_H
