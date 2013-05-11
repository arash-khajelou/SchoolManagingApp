#ifndef TEACHERMENU_H
#define TEACHERMENU_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class TeacherMenu : public QWidget{

Q_OBJECT

public:
    TeacherMenu(QWidget * parent = 0);
private slots :
private :

    QPushButton* showResult        ;
    QPushButton* listOfStudents    ;
    QPushButton* setStudentGrade   ;
    QPushButton* addUser           ;
};

#endif // TEACHERMENU_H
