#ifndef MANAGECLASSWINDOW_H
#define MANAGECLASSWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QStringList>

#include "dbmanager.h"

class ManageClassWindow : public QMainWindow {

    Q_OBJECT
public:
    ManageClassWindow(QMainWindow * parent = 0);
private slots:
    void onConfirmClicked () ;
private:
    QComboBox* stList ;
    QComboBox* clList ;

    QPushButton* confirm ;
};

#endif // MANAGECLASSWINDOW_H
