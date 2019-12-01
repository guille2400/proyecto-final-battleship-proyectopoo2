#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Submarine.h"
#include "Battleship.h"
#include "Aircraft.h"

using namespace std;

int main()
{
    srand(time(0));
    Battleship game;
    cout<<"Proyecto POO2: "<<endl;

    // Generacion tablero PC
    game.Anadir_Piezas_PC("");// implementación de lectura, pero no se usa.
    // place your pieces
    for(int i=0;i<6;i++){
        game.Anadir_Piezas_Jugador();
    }

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    game.displayBoards();
    do{
        string playerMove = game.playerMove();
        string computerMove = game.computerMove();
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        game.displayBoards(playerMove, computerMove);
    }while(game.gameOver() == 0);

    int gameOver = game.gameOver();
    if(gameOver == 1)
    {
        cout << "Perdiste!!"<<endl;
    }
    else if(gameOver == 2)
    {
        cout << "Ganaste!!"<<endl;
    }
    else if(gameOver == 3)
    {
        cout << "Empate!!"<<endl;
    }
}