#include "chef.h"

Chef::Chef(string name)
{
    chefName = name;
    cout<<"Chef "<<chefName<<" constructor"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<chefName<<" destructor"<<endl;
}

string Chef::getName()
{
    return " ";
}

int Chef::makeSalad(int saladIng)
{
    int portions = saladIng/5;
    if (portions >=1)
    {
        cout<<"Chef "<<chefName<<" with "<<saladIng<<" ingredients can make "<<portions<<" portions of salad"<<endl;
    }

    return portions;
}

int Chef::makeSoup(int soupIng)
{
    int portions = soupIng/3;
    if (portions >=1)
    {
        cout<<"Chef "<<chefName<<" with "<<soupIng<<" ingredients can make "<<portions<<" portions of soup"<<endl;
    }
    return portions;
}
