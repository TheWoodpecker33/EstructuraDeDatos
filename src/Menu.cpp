#include "Menu.h"

Menu::Menu()
{
    opc = 0;
}

int Menu::mainmenu()
{
    cout << "1.- Insertar" << endl;
    cout << "2.- Eliminar" << endl;
    cout << "3.- Modificar" << endl;
    cout << "4.- Mostrar Actual" << endl;
    cout << "5.- Avanzar" << endl;
    cout << "6.- Mostrar Todos" << endl;
    cout << "7.- Limpiar Lista" << endl;
    cout << "8.- Salir" << endl;
    cout << "--: ";
    cin >> opc;

    return opc;
}

int Menu::addMenu()
{
    cout << "1.- Al Final" << endl;
    cout << "2.- Al Inicio" << endl;
    cout << "--: ";
    cin >> opc;

    return opc;
}

Menu::~Menu()
{

}
