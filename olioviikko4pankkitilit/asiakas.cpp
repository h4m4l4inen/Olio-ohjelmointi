#include "asiakas.h"
#include <iostream>

//jäi melko keskeneräiseksi

asiakas::asiakas(string name, double luottoraja):luottotili(o,l)
{
    name = omistaja;
    -l = luottoraja;
    cout<<"Customership created for "<<omistaja<<endl;
}
string asiakas::getNimi()
{
    return " ";
}

void asiakas::showSaldo()
{
    cout<<"The account's balance is "<<saldo<<endl;
    cout<<"The credit account's balance is "<<saldo<<endl;
}

bool asiakas::talletus(double)
{
    deposit(200);
}

bool asiakas::nosto(double)
{
    withdraw(100);
}

bool asiakas::luotonMaksu(double)
{
    deposit(200);
}

bool asiakas::luotonNosto(double)
{
    withdraw(500);
}

bool asiakas::tiliSiirto(double siirto, asiakas &)
{
    if(saldo-siirto>0)
    {
        saldo = saldo - siirto;
        cout<<"Transfer successful"<<endl;
    }
}
