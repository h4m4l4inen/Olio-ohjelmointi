#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout<<"Luodaan seuraaja "<<nimi<<endl;

}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string msg)
{
    cout<<"Seuraaja "<<nimi<<" sai viestin "<<msg<<endl;
}
