#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

struct Heap {

    // Miembros
    int * arbol;
    int cantidad; // De datos
    int tamannoMax; // El tamaño máximo de datos

    // Constructor
    Heap(int pTamannoMax){
        arbol = new int[pTamannoMax+1];
        tamannoMax = pTamannoMax;
        cantidad = 0;
    }

    // Funciones para acceder a los nodos del heap
    int padre(int pos);
    int hijoIzq(int pos);
    int hijoDer(int pos);

    // Funciones de procesos
    bool empiezaNivel(int pos);
    void permutar(int posPadre, int posHijo);

    // Funciones del trabajo
    void insertar(int valor);
    void eliminar();
    void imprimir();
};