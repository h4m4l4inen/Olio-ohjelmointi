#include "pankkitili.h"
#include <iostream>

using namespace std;


pankkitili::pankkitili(string o)
{
    omistaja = o;
    cout<<"Account created for "<<omistaja<<endl;
}

double pankkitili::getBalance()
{
    cout<<omistaja<<"'s account's balance is "<<saldo<<endl;
    return saldo;
}

bool pankkitili::deposit(double talletus)
{
    saldo = saldo + talletus;
    cout<<talletus<<" has been deposited to the account"<<endl;
    return true;
}

bool pankkitili::withdraw(double nosto)
{
    if(nosto > saldo)
    {
        cout<<"Not enough balance"<<endl;
        return false;
    }
    else
    {
        saldo = saldo - nosto;
        cout<<nosto<<" has been withdrawn from the account"<<endl;
        return true;
    }
}

