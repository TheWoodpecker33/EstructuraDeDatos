#include "Lista.h"

Lista::Lista()
{
    cabecera = nullptr;
    actual = nullptr;
}

bool Lista::listaVacia()
{
    return cabecera == nullptr;
}

bool Lista::insertarInicio(Nodo* nuevo)
{
    if(listaVacia())
    {
        cabecera = nuevo;
        return true;
    }
    else
    {
        nuevo->newSig(cabecera);
        cabecera = nuevo;
        return true;
    }
    return false;
}

bool Lista::insertarFinal(Nodo* nuevo)
{
    if(listaVacia())
    {
        cabecera = nuevo;
        return true;
    }
    else
    {
        Nodo* aux = cabecera;
        while(aux->getSig())
        {
            aux = aux->getSig();
        }
        aux->newSig(nuevo);
        return true;
    }

    return false;
}

bool Lista::modificar(char dato)
{
    if(!listaVacia())
    {
        actual->newChar(dato);
        return true;
    }
    else
    {
        return false;
    }
}

Lista::~Lista()
{

}
