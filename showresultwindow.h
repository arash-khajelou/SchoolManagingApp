#ifndef SHOWRESULTWINDOW_H
#define SHOWRESULTWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QString>
#include <QStringList>

#include "dbmanager.h"
#include "result.h"

class ShowResultWindow : public QMainWindow {

    Q_OBJECT
public:
    ShowResultWindow(QMainWindow * parent = 0);
private slots :
    void onConfirmClicked () ;
private:
    QComboBox*   stList  ;
    QPushButton* confirm ;

    Result*      result  ;
};

#endif // SHOWRESULTWINDOW_H
