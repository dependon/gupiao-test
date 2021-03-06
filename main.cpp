#include "mainwindow.h"
#include <application.h>
#include "data.h"
#include <QMetaType>
#include "floatball.h"

Q_DECLARE_METATYPE(MapdataHaveGP);
Q_DECLARE_METATYPE(MapdataGP);
Q_DECLARE_METATYPE(DataAllDP);
int main(int argc, char *argv[])
{

    qRegisterMetaType< MapdataGP>("MapdataGP");
    qRegisterMetaType< MapdataHaveGP>("MapdataHaveGP");
    qRegisterMetaType<DataHaveGP>("DataHaveGP");
    qRegisterMetaType<DataGP>("DataGP");
    qRegisterMetaType<DataAllDP>("DataAllDP");
    application a(argc, argv);
    //    MainWindow w;
    //    w.show();

    floatBall ball;
    ball.show();

//    StockCanvas x("1002624");
//    x.show();
    return a.exec();
}
