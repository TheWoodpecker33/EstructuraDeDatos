#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

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
        bool eliminar();
        bool buscar(char);
        bool avanzar();
        bool mostrar();
        bool mostrarTodos();
        void limpiarLista();
        virtual ~Lista();
};

#endif // LISTA_H
