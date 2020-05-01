#include "mainwindow.h"
#include "../tdproject/db/createtables.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug()<<"start";

//    QSqlDatabase db;
//    if(!db.open())
//    {
//        qDebug()<<"Error opening database";
//    }else{
//        qDebug()<<"Connection Established.";
//    }

    qDebug()<<"end";

    MainWindow w;
    w.show();

    return a.exec();
}

