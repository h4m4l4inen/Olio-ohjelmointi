#include "italianchef.h"

ItalianChef::ItalianChef(string name):Chef(name)
{
    cout<<"Italian chef "<<chefName<<" constructor"<<endl;
}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string p, int flour, int water)
{
    cout<<"What is the password?"<<endl;
    cin>>p;
    if(p == password)
    {
        cout<<"Password ok"<<endl;
        makepizza(flour, water);
        return true;
    }
    else
    {
        cout<<"Password not ok"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int flour, int water)
{
    int portions = (flour/5, water/5);
    cout<<"Chef "<<chefName<<" can make "<<portions<<" portions of pizza"<<endl;

    return portions;
}
