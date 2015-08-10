/*
*Elemental V0.1
*First 20 elementals useable
*Ionic bonds added
*Covalent bonding not supported
*Metal alloys unsupported
*/


#include "periodictable.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
    //objects
    QApplication a(argc, argv);
    PeriodicTable w;

    //show window
    w.show();
    return a.exec();
}
