//
// Created by Juan Galvez on 2019-11-26.
//

#ifndef PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_NAVES_H
#define PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_NAVES_H

#endif //PROYECTO_FINAL_BATTLESHIP_PROYECTOPOO2_NAVES_H




class Naves {

protected:
    int num_casillas;
    char orientacion;

public:

    Naves(int casillas, char orie): num_casillas{casillas}, orientacion{orie}{}
    virtual ~Naves();
    void set_numcasillas(int _n){num_casillas = _n;}
    int get_numcasillas(){
        return num_casillas;
    }

};


class Aircraft_Carrier : public Naves{
public:
    Aircraft_Carrier(int casillas, char orie):Naves(casillas,orie){}
    ~Aircraft_Carrier(){};
};

class Battlecruiser : public Naves{
public:
    Battlecruiser(int casillas, char orie):Naves(casillas,orie){}
    ~Battlecruiser(){};
};

class Submarine : public Naves{
public:
    Submarine(int casillas, char orie):Naves(casillas,orie){}
    ~Submarine(){};
};

class Torpedo_boat : public Naves{
public:
    Torpedo_boat(int casillas, char orie):Naves(casillas,orie){}
    ~Torpedo_boat(){};

};




