#ifndef ACCOUNTViewer_H
#define ACCOUNTViewer_H

#include "accountedit.h"
#include "museummain.h"
#include "user.h"
#include "addmuseum.h"

#include "additem.h"

#include <QDialog>

class MuseumMain;
class MuseumList;
class MyComments;
class ItemsViewed;


class AccountEdit;
class MuseumList;
class MyComments;
class ItemsViewed;
class AddItem;
class AddMuseum;

using namespace std;

class User;


namespace Ui {
class accountViewer;
}

class accountViewer : public QDialog
{
    Q_OBJECT

public:
    explicit accountViewer(QWidget *parent = nullptr);
    ~accountViewer();
    void getAccInfo(string);
    string currUser;
    string currPass;
    string currEmail;
    string currName;
    string currType;

    void setUser(User u);

    void setUName(std::string u);
    std::string getUName();




private slots:
    void on_pushButton_clicked();

    void on_homeButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_mListButton_clicked();

    void on_addMusButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::accountViewer *ui;

    AccountEdit *ae;
    MuseumMain *mu;
    MuseumList *ml;
    MyComments *mc;
    ItemsViewed *iv;
    AddMuseum *am;

    AddItem *ai;

    std::string username;

    static User* curUser;
};

#endif // ACCOUNTViewer_H
