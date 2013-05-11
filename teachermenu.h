#ifndef TEACHERMENU_H
#define TEACHERMENU_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

#include "showresultwindow.h"
#include "listofstudentswindow.h"
#include "setstudentgradewindow.h"


class TeacherMenu : public QWidget{

Q_OBJECT

public:
    TeacherMenu(QWidget * parent = 0);
private slots :
    void onShowResultClicked () ;
    void onListOfStudentsClicked () ;
    void onSetStudentGradeClicked () ;
private :

    QPushButton* showResult        ;
    QPushButton* listOfStudents    ;
    QPushButton* setStudentGrade   ;

    ShowResultWindow * showResultWindow ;
    ListOfStudentsWindow * listOfStudentsWindow ;
    SetStudentGradeWindow * setStudentGradeWindow ;
};

#endif // TEACHERMENU_H
