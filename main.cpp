#include <iostream>
#include "Menu.h"
#include "Nodo.h"
#include "Lista.h"

using namespace std;

int main()
{
    Menu menu;
    Lista lista;
    int opc;
    char caracter;

    while(opc != 8)
    {
        opc = menu.mainmenu();

        switch(opc)
        {
            case 1:
                opc = menu.addMenu();

                switch(opc)
                {
                    case 1:
                        cout << "Ingrese el caracter: ";
                        cin >> caracter;
                        if(!lista.buscar(caracter))
                        {
                            Nodo* aux = new Nodo(caracter);
                            lista.insertarFinal(aux);
                        }
                        break;
                    case 2:
                        cout << "Ingrese el caracter: ";
                        cin >> caracter;
                        if(!lista.buscar(caracter))
                        {
                            Nodo* aux = new Nodo(caracter);
                            lista.insertarInicio(aux);
                        }
                        break;
                    default:
                        cout << "Esa opcion no existe" << endl;
                        break;
                }
                break;
            case 2:
                if(lista.eliminar())
                {
                    cout << "Se ha eliminado correctamente" << endl;
                }
                else
                {
                    cout << "No se ha podido eliminar" << endl;
                }
                break;
            case 3:
                cout << "Ingresa el caracter: ";
                cin >> caracter;
                if(!lista.buscar(caracter))
                {
                    lista.modificar(caracter);
                }
                else
                {
                    cout << "Ya existe ese caracter en la lista" << endl;
                }
                break;
            case 4:
                if(lista.mostrar())
                {

                }
                else
                {
                    cout << "Lista Vacia" << endl;
                }
                break;
            case 5:
                if(lista.avanzar())
                {
                    cout << "Se ha movido el puntero" << endl;
                }
                else
                {
                    cout << "Lista vacia o final de la lista" << endl;
                }
                break;
            case 6:
                if(lista.mostrarTodos())
                {

                }
                else
                {
                    cout << "Lista Vacia" << endl;
                }
                break;
            case 7:
                lista.limpiarLista();
                cout << "Se ha limpiado la lista" << endl;
                break;
            case 8:
                cout << "Adios" << endl;
                break;
            default:
                cout << "Esa opcion no existe" << endl;
                break;
        }
    }

    return 0;
}
