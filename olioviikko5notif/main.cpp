#include <iostream>
#include <seuraaja.h>
#include <notifikaattori.h>

using namespace std;

int main()
{
    Notifikaattori N;

    Seuraaja eka("Kalle");
    Seuraaja toka("Pekka");
    Seuraaja kolmas("Mauri");

    /*cout<<eka.getNimi()<<endl;
    eka.paivitys("testi");*/


    N.lisaa(&eka);
    N.lisaa(&toka);
    N.lisaa(&kolmas);

    N.tulosta();

    N.postita("Tama on viesti 1");

    N.poista(&toka);

    N.postita("Tama on viesti 2");

    return 0;
}
