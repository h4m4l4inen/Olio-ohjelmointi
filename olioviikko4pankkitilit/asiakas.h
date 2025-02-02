#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class asiakas:public luottotili
{
public:
    asiakas(string,double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double,asiakas &);
private:
    string name;
    pankkitili kayttotili;
    luottotili luottotili;
};

#endif // ASIAKAS_H
