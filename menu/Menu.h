#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <wincon.h>
#define KEY_UP 119
#define KEY_DOWN 115

using namespace std;

class Menu
{
private:
    int opcao1;

    int opcao2;

    int opcao3;

public:
    Menu();

    int ch;

    int contador = 0;

    void setOpcao(int opcao);

    int displayMenuPrincipal();

    int displayMenuPerdeuOJogo();

    int escolha();
};

#endif // MENU_H
