#include "Nodo.h"

Nodo::Nodo()
{
    sig = nullptr;
}

Nodo::Nodo(char dato)
{
    a = dato;
    sig = nullptr;
}

void Nodo::newSig(Nodo* nuevo)
{
    sig = nuevo;
}

void Nodo::newChar(char nuevo)
{
    a = nuevo;
}

char Nodo::getChar()
{
    return a;
}

Nodo* Nodo::getSig()
{
    return sig;
}

Nodo::~Nodo()
{

}
