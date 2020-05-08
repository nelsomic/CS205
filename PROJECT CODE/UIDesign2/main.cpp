
#include "login.h"
#include <QtSql>
#include <QApplication>
#include <iostream>
#include "item.h"

using namespace std;

QSqlDatabase db;

//Used only once to setup the user and item databases
void openDatabases()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    QSqlQuery query;
    query.exec("create table itemTable (name varchar(100), description varchar(500), artist varchar(100), owner varchar(100), museum varchar(100), collection varchar(100), filename TEXT, imagedata BLOB)");
    query.exec("create table userTable (user varchar(50), pass varchar(50), name varchar(50), email varchar(75), type varchar(10))");
    query.exec("create table commentTable (comment varchar(300), user varchar(200), item varchar(100), approved varchar(10))");
    query.exec("create table museumTable (name varchar(300), description varchar(500), owner varchar(200))");
}

int main(int argc, char *argv[])
{
    openDatabases();
    QApplication a(argc, argv);
    Login w;
    w.show();
    return a.exec();
}

//Creates new comment in SQL Database
void addComment(string comment, string user, string item, string approval)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input
    string s1 = "insert into commentTable values('";
    s1.append(comment);
    s1.append("', '");
    s1.append(user);
    s1.append("', '");
    s1.append(item);
    s1.append("', '");
    s1.append(approval);
    s1.append("')");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}

//takes the item, comment, and commenter's username and sets the approval to true
void approveComment(string item, string comment, string user)
{
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }
    //Creating query from input

    string s1 = "UPDATE commentTable SET approved = 'true' WHERE comment = '";
    s1.append(comment);
    s1.append("' AND item = '");
    s1.append(item);
    s1.append("' AND user = '");
    s1.append(user);
    s1.append("'");
    cout << s1 << endl;
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());

    //Adds the item created to the table
    QSqlQuery query;
    query.exec(s2);
}

Item getItemObject(string museum, string itemName)
{
    Item item1;
    QSqlDatabase db;
    //connect to database
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dbv2.sqlite");

    //Opens database
    if(!db.open())
    {
        cout << "DATABASE COULD NOT BE OPENED" << endl;
    }

    string s1 = "SELECT * FROM itemTable WHERE name = ";
    s1.append("'");
    s1.append(itemName);
    s1.append("'");
    s1.append(" AND museum = '");
    s1.append(museum);
    s1.append("'");
    char s2[s1.size()+1];
    strcpy(s2,s1.c_str());
    cout << s2 << endl;
    QSqlQuery query;

    //Checks if code can be run, then checks if it comes up with a match
    if(!query.exec(s2))
    {
        cout << "DATABASE MALFUNCTION";
    }


}






