#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <wincon.h>
#include <string>
#include "SaveRecords.h"

using namespace std;

class Menu : public SaveRecords
{
private:
    int opcao1;

    int opcao2;

    int opcao3;

protected:
    std::string playerName;

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
