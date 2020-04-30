#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <vector>
#include <string>
#include <QtSql>
#include <QtWidgets>

using namespace std;

class Item
{
public:
    Item();
    Item(string name1, string desc1, string art1, string own1, string mus1, string coll1, string file1);
    Item(string name1, string desc1, string art1, string own1, string mus1, string coll1, string file1, QPixmap img);
    string getName();
    string getDescription();
    string getArtist();
    string getOwner();
    string getMuseum();
    string getCollection();
    string getFilename();
    QPixmap getImage();

    string name;
    string description;
    string artist;
    string owner;
    string museum;
    string collection;
    string filename;
    QPixmap image;
};

#endif // ITEM_H
