#include "login.h"
#include <QtSql>
#include <QApplication>
#include <iostream>

using namespace std;

QSqlDatabase db;

void createDatabases() //Used only once to setup the user and item databases
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    QSqlQuery query;
    query.exec("create table itemTable (name varchar(100), description varchar(200), artist varchar(30))");
    query.exec("create table userTable(user varchar(50), pass varchar(50), name varchar(50), email varchar(75))");
}

void openDatabases()
{
    //Connects to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
}

int main(int argc, char *argv[])
{
    createDatabases();
    //openDatabases();
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}
