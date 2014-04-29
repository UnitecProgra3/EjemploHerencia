#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
using namespace std;

class Personaje
{
    public:
        string tipo;
        int vida;
        int ataque;

        Personaje();
        virtual ~Personaje();
        void poderEspecial();
        void imprimir();
    protected:
    private:
};

#endif // PERSONAJE_H
