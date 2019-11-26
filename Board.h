//
// Created by Juan Galvez on 2019-11-26.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H


class Board{

private:
    int filas;
    int columnas;


public:

    Board(int,int);
    void Construir();
    void clear();
    ~Board();


};


#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_BOARD_H
