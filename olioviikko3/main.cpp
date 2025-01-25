#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Ramsey");
    kokki.makeSalad(15);
    kokki.makeSoup(6);
    ItalianChef kokki2("Mario");
    kokki2.makeSalad(10);
    kokki2.makeSoup(9);
    kokki2.askSecret("pizza",10,10);

    return 0;
}
