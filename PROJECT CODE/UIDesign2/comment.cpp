#include "comment.h"

Comment::Comment()
{

}

string Comment::getComment()
{
    return comment;
}

string Comment::getUser()
{
    return user;
}

string Comment::getItem()
{
    return item;
}

string Comment::getApproved()
{
    return approved;
}
