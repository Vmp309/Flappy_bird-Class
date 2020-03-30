#include "Menu.h"

Menu::Menu()
{
    //ctor
}

void Menu::setOpcao(int opcao){
opcao1 = opcao;
}



int Menu::displayMenuPrincipal(){


    while(1){

        system("cls");
        cout << "---------------------FLAPPY BIRD----------------------" << endl << endl << endl << endl;

        cout << "                    [1]JOGAR                         " << endl <<  endl;
        cout << "                    [2]RECORDES                       " << endl << endl;
        cout << "                    [3]SAIR                         " << endl << endl;
        cout << "Pressione ENTER apos selecionar uma opcao" << endl;

        cin >> ch;

        if (ch != 1 && ch != 2 && ch != 3){
            cout << "Opcao invalida" << endl;
            continue;

        }else if (ch == 3){
            cout << "ADEUS AMIGO, ATE BREVE!" << endl;
            return 0;
        }
        else{
        /// Escolheu JOGAR ou RECORDES
           return ch;
            break;
        }
    }
}


int Menu::displayMenuPerdeuOJogo(){

    while (1){
        system ("cls");
        cout << "-----------------------FLAPPY BIRD----------------------" << endl;
        cout << "              VOCE PERDEU! JOGAR NOVAMENTE?             " << endl;
        cout << "                         [1]Sim                         " << endl;
        cout << "                         [2]Nao                         " << endl;

        cin >> ch;

        if (ch != 1 && ch != 2){
            cout << "Opcao Invalida" << endl;

        }else if (ch == 1){
            ///Cria uma nova instância do jogo para jogar novamente!!!

        }else if (ch == 2){
        /// Voltar ao menu principal

        }
        return ch;
    }
}

