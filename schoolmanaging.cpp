#include "schoolmanaging.h"
#include "enterform.h"

#include <QApplication>

int SchoolManaging::run(int argc, char** argv)
{
    QApplication app(argc, argv);
    EnterForm foo;
    foo.show();
    return app.exec();

}
