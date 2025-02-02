#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <string>
#include "pankkitili.h"

using namespace std;

class luottotili : public pankkitili
{
public:
    luottotili(string, double);
    bool deposit(double)override;
    bool withdraw(double)override;
protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
