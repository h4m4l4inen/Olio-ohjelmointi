#include "luottotili.h"
#include <iostream>


luottotili::luottotili(string o, double l):pankkitili(o)
{
    luottoraja = -l;
    //tulostaa sen pankkitili account created 2 kertaa
    cout<<"Credit account created for "<<omistaja<< ", credit limit is "<<luottoraja<<endl;
}

bool luottotili::deposit(double ltalletus)
{
    if(ltalletus >0)
    {
        saldo = saldo + ltalletus;
        cout<<ltalletus<<" has been deposited to the credit account"<<endl;
        return true;
    }
    else
    {
        cout<<"Deposit couldn't be made"<<endl;
        return false;
    }
}

bool luottotili::withdraw(double lnosto)
{
    double valitulos = saldo-lnosto;
    /*cout<<"Valitulos ennen "<<valitulos<<endl;
    cout<<"Luottoraja "<<luottoraja<<endl;*/
    if((valitulos)<luottoraja)
    {
        cout<<"Can't go over credit limit"<<endl;
        return false;
    }
    else
    {
        saldo = valitulos;
        cout<<lnosto<<" has been withdrawn from the credit account"<<endl;
        //cout<<"Luottotilin saldo nyt: "<<saldo<<endl;
        return true;
    }
}
