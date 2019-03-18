#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"

class Lista
{
    private:
        Nodo* cabecera;
        Nodo* actual;
    public:
        Lista();
        bool listaVacia();
        bool insertarInicio(Nodo*);
        bool insertarFinal(Nodo*);
        bool modificar(char);
        virtual ~Lista();
};

#endif // LISTA_H
