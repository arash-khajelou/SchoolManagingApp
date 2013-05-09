#ifndef MANAGERMENU_H
#define MANAGERMENU_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

#include <QString>
#include <QDebug>

class ManagerMenu : public QWidget {

Q_OBJECT

public:
    ManagerMenu(QWidget * parent = 0);
private slots :
    void onManageClassClicked () ;
private :
    QPushButton* manageClass       ;
    QPushButton* setDisiplineGrade ;
    QPushButton* addDelay          ;
    QPushButton* showResult        ;
    QPushButton* addStudent        ;
};

#endif // MANAGERMENU_H
