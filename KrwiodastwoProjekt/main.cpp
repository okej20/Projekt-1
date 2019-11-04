#include "projekt1.h"

#include <QApplication>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <iostream>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("project");
    bool ok = db.open();







    Projekt1 w;
    w.show();
    return a.exec();
}
