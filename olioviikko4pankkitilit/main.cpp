#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    pankkitili ptili1("Kalle");
    luottotili ltili1("Kalle",1000);
    ptili1.getBalance();
    ptili1.deposit(200);
    ptili1.withdraw(100);
    ptili1.getBalance();

    ltili1.withdraw(500);
    ltili1.getBalance();
    ltili1.deposit(200);
    ltili1.getBalance();


    return 0;
}
