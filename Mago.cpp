#include "Mago.h"

Mago::Mago(int vida, int ataque)
{
    this->vida=vida;
    this->ataque=ataque;
    this->tipo="Mago";
    this->super_rayo=false;
}

void Mago::imprimir()
{
    cout<<tipo<<endl;
    cout<<"vida: "<<vida<<endl;
    cout<<"ataque: "<<ataque<<endl;
    cout<<"super rayo: "<<super_rayo<<endl;
}

void Mago::poderEspecial()
{
    super_rayo=true;
}

Mago::~Mago()
{
    cout<<"Destructor"<<endl;
}
