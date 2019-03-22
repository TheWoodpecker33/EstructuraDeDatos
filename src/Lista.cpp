#include "Lista.h"

Lista::Lista()
{
    cabecera = nullptr;
    actual = cabecera;
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
        actual = cabecera;
        return true;
    }
    else
    {
        nuevo->newSig(cabecera);
        cabecera = nuevo;
        actual = cabecera;
        return true;
    }
    return false;
}

bool Lista::insertarFinal(Nodo* nuevo)
{
    if(listaVacia())
    {
        cabecera = nuevo;
        actual = cabecera;
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

bool Lista::eliminar()
{
    if(!listaVacia())
    {
        Nodo* aux = cabecera;
        while(aux->getSig() != actual)
        {
            aux = aux->getSig();
        }

        aux->newSig(actual->getSig());

        return true;
    }
    else
    {
        return false;
    }
}

bool Lista::buscar(char dato)
{
    if(!listaVacia())
    {
        Nodo* aux = cabecera;
        while(aux)
        {
            if(aux->getChar() == dato)
            {
                return true;
            }
            aux = aux->getSig();
        }
        return false;
    }
    else
    {
        return false;
    }
}

bool Lista::avanzar()
{
    if(!listaVacia() && actual != nullptr)
    {
        actual = actual->getSig();
        if(actual == nullptr)
        {
            return false;
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool Lista::mostrar()
{
    if(!listaVacia() && actual != nullptr)
    {
        if(actual)
        {
            cout << actual->getChar() << endl;
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool Lista::mostrarTodos()
{
    if(!listaVacia())
    {
        Nodo* aux = cabecera;

        while(aux)
        {
            cout << aux->getChar() << endl;

            aux = aux->getSig();
        }

        return true;
    }
    else
    {
        return false;
    }

}

void Lista::limpiarLista()
{
    cabecera = nullptr;
    actual = nullptr;
}

Lista::~Lista()
{

}
