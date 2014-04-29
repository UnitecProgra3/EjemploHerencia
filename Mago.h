#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"
#include<iostream>
using namespace std;

class Mago : public Personaje
{
    public:
        bool super_rayo;

        Mago(int vida, int ataque);
        void imprimir();
        void poderEspecial();
        virtual ~Mago();
    protected:
    private:
};

#endif // MAGO_H
