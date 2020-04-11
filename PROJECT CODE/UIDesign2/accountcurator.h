#ifndef ACCOUNTCURATOR_H
#define ACCOUNTCURATOR_H

#include "accountedit.h"
#include "museummain.h"

#include <QDialog>

class MuseumMain;
class MuseumList;
class MyComments;
class ItemsViewed;


class AccountEdit;
class MuseumList;
class MyComments;
class ItemsViewed;

namespace Ui {
class accountCurator;
}

class accountCurator : public QDialog
{
    Q_OBJECT

public:
    explicit accountCurator(QWidget *parent = nullptr);
    ~accountCurator();

private slots:
    void on_pushButton_clicked();

    void on_homeButton_clicked();

    void on_itemsViewedButton_clicked();

    void on_myCommentsButton_clicked();

    void on_mListButton_clicked();

private:
    Ui::accountCurator *ui;

    AccountEdit *ae;
    MuseumMain *mu;
    MuseumList *ml;
    MyComments *mc;
    ItemsViewed *iv;
};

#endif // ACCOUNTCURATOR_H
