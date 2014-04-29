#include "Guerrero.h"

Guerrero::Guerrero(int vida, int ataque)
{
    this->vida=vida;
    this->ataque=ataque;
    this->tipo="Guerrero";
}

void Guerrero::imprimir()
{
    cout<<tipo<<endl;
    cout<<"vida: "<<vida<<endl;
    cout<<"ataque: "<<ataque<<endl;
}

void Guerrero::poderEspecial()
{
    ataque*=2;
    vida/=2;
}
