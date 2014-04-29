#include<iostream>
#include "Guerrero.h"
#include "Mago.h"
#include <vector>

using namespace std;

int main()
{
    Guerrero*g = new Guerrero(100,10);
    Mago*m = new Mago(70,5);

    g->imprimir();
    m->imprimir();

    g->poderEspecial();
    m->poderEspecial();

    g->imprimir();
    m->imprimir();

    return 0;
}
