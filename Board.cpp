//
// Created by Juan Galvez on 2019-11-26.
//

#include "Board.h"
#include <vector>
#include <map>

using namespace std;


Board::Board(): tablero{nullptr}, filas {0}, columnas{0} {

}

Board::Board (int f, int c): filas {f}, columnas{c} {

    tablero = new int*[filas];
    for (int i= 0 ; i < filas; i++){
        tablero[i] = new int[columnas];
    }
}

void Board::llenar() {
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            tablero[i][j] = 1;
        }
    }
}

void Board::imprimir(){

    for ( int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout<<tablero[i][j]<<"  ";
        }
        cout << endl;
    }
}

Board::~Board() {

}
