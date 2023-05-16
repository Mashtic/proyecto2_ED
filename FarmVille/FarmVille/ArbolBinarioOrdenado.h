#include <cstdlib>
#include <iostream>

using namespace std;

struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;

    Nodo(int valor) {
        this->valor = valor;
        izquierdo = nullptr;
        derecho = nullptr;
    }
};

struct ArbolBinarioOrdenado {
    Nodo * raiz;

    ArbolBinarioOrdenado() {
        raiz = nullptr;
    }

    void insertar(int valor);
    void preorden(Nodo* nodo);
    void inorden(Nodo* nodo);
    void postorden(Nodo* nodo);
    bool buscar(int valor);
    int altura(Nodo* nodo);
    int cantidadNodos(Nodo* nodo);
    int sumatoriaValores(Nodo* nodo);
};