#ifndef MENU_H
#define MENU_H
#include <iostream>

using namespace std;

class Menu
{
    private:
        int opc;
    public:
        Menu();
        int mainmenu();
        int addMenu();
        virtual ~Menu();
};

#endif // MENU_H
