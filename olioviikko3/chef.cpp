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

/*
Toteuta luokka ItalianChef, joka perii Chef-luokan.
Lisää luokkaan luokkakaavion mukaiset jäsenmuuttujat.

Salasanalle annetaan alustusarvoksi pizza.

Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok,
ja jos on, kutsuu makePizza()-jäsenfunktiota.
Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
Funktio palauttaa true/false sen mukaan oliko salasana oikea.

makePizza tekee pizzoja niin paljon kuin aineksi riittää, yhteen pizzaan tarvitaan:
5 ainesta jauhoja
5 ainesta vettä

makePizza() on privaatti siksi, että se on salainen
ja sitä ei voi muuten kutsua kun tietämällä salasanan
(muitakin tapoja tehdä tarkistus kyllä on..). */
