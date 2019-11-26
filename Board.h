//
// Created by Juan Galvez on 2019-11-26.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H


class Board{

private:
    int **tablero;
    int filas;
    int columnas;

public:
    Board();
    Board(int,int);

    void llenar();

    void imprimir();

    ~Board();



    void Construir(int f, int c);
};

#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H
