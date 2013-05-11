#ifndef MANAGERMENU_H
#define MANAGERMENU_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <QString>
#include <QDebug>

#include "addstudentwindow.h"
#include "adddelaywindow.h"
#include "showresultwindow.h"
#include "manageclasswindow.h"
#include "setdisiplinewindow.h"

class ManagerMenu : public QWidget {

Q_OBJECT

public:
    ManagerMenu(QWidget * parent = 0);
private slots :
    void onManageClassClicked () ;
    void onSetDisiplineClicked () ;
    void onAddDelayClicked () ;
    void onShowResultClicked () ;
    void onAddStudentClicked () ;

private :
    QPushButton* manageClass       ;
    QPushButton* setDisiplineGrade ;
    QPushButton* addDelay          ;
    QPushButton* showResult        ;
    QPushButton* addStudent        ;

    AddStudentWindow   *addStudentWindow  ;
    AddDelayWindow     *addDelayWindow    ;
    ShowResultWindow   *showResultWindow  ;
    SetDisiplineWindow *setDisiplineWindow;
    ManageClassWindow  *manageClassWindow ;
};

#endif // MANAGERMENU_H
