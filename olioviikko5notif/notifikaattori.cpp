#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout<<"Notifikaattori luotu"<<endl;
}

void Notifikaattori::lisaa(Seuraaja * ps)
{
    if(seuraajat == nullptr)
    {
        seuraajat = ps;
    }
    else
    {
        ps->next=seuraajat;
        seuraajat = ps;
    }
    cout<<"Notifikaattori lisaa seuraajan "<<ps->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja * ptr)
{
    Seuraaja * o = seuraajat;
    while(o->next != nullptr)
    {
        if(o->next == ptr)
        {
            o->next = o->next->next;
        }
        o = o->next;
    }
    //Seuraaja * seuraava = ptr->next;

    cout<<"Notifikaattori poistaa seuraajan "<<ptr->getNimi()<<endl;
}

void Notifikaattori::tulosta()
{
    cout<<"Notifikaattorin seuraajat: "<<endl;
    Seuraaja * t = seuraajat;
    while(t != nullptr)
    {
        cout<<"Seuraaja "<<t->getNimi()<<endl;
        t = t->next;
    }
}

void Notifikaattori::postita(string m)
{

    cout<<"Notifikaattori postaa viestin "<<m<<endl;
    Seuraaja * p = seuraajat;
    while(p != nullptr)
    {
        p->paivitys(m);
        p = p->next;
    }
}
