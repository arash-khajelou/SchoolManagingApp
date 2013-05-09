#ifndef ROOTMENU_H
#define ROOTMENU_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <QString>
#include <QDebug>

class RootMenu : public QWidget {

Q_OBJECT

public :
    RootMenu(QWidget * parent = 0);
private slots :
    void onManageClassClicked () ;
private :
    QPushButton* manageClass       ;
    QPushButton* setDisiplineGrade ;
    QPushButton* addDelay          ;
    QPushButton* showResult        ;
    QPushButton* addStudent        ;
    QPushButton* addUser           ;
};

#endif // ROOTMENU_H
