#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

struct Granjero{

    int pos[2];
    int max;
    int dinero;

    Granjero(int pMax, int pDinero){
        pos[0] = 0;
        pos[1] = 0;
        max = pMax;
        dinero = pDinero;
    }

    // Getters 
    int getX(){
        return pos[0];
    }

    int getY(){
        return pos[1];
    }

    string getPos(){
        return "(" + to_string(pos[0]) + "," + to_string(pos[1]) + ")";
    }

    // Métodos movimiento (Setter)
    void moverIzquierda(){
        if (pos[0] > 0)
            pos[0] -= 1;
    }

    void moverDerecha(){
        if (max > pos[0])
            pos[0] += 1;
    }

    void moverArriba(){
        if (pos[1] > 0)
            pos[1] -= 1;
    }

    void moverAbajo(){
        if (max > pos[1])
            pos[1] += 1;
    }

};