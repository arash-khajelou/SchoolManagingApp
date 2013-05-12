#ifndef SETDISIPLINEWINDOW_H
#define SETDISIPLINEWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QStringList>
#include <QLineEdit>

#include "dbmanager.h"

class SetDisiplineWindow : public QMainWindow {

    Q_OBJECT
public:
    SetDisiplineWindow(QMainWindow * parent = 0 );
private slots :
    void onConfirmClicked () ;
private :
    QComboBox*   stList ;
    QLineEdit*   grade  ;
    QPushButton* confirm ;
};

#endif // SETDISIPLINEWINDOW_H
