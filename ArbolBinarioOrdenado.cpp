#include "ArbolBinarioOrdenado.h"

void ArbolBinarioOrdenado::insertar(int valor) {
    Nodo* nuevo_nodo = new Nodo(valor);
    if (raiz == nullptr) {
        raiz = nuevo_nodo;
    }
    else {
        Nodo* actual = raiz;
        while (true) {
            if (valor < actual->valor) {
                if (actual->izquierdo == nullptr) {
                    actual->izquierdo = nuevo_nodo;
                    break;
                }
                else {
                    actual = actual->izquierdo;
                }
            }
            else {
                if (actual->derecho == nullptr) {
                    actual->derecho = nuevo_nodo;
                    break;
                }
                else {
                    actual = actual->derecho;
                }
            }
        }
    }
}

void ArbolBinarioOrdenado::preorden(Nodo* nodo) {
    if (nodo != nullptr) {
        cout << nodo->valor << " ";
        preorden(nodo->izquierdo);
        preorden(nodo->derecho);
    }
}

void ArbolBinarioOrdenado::inorden(Nodo* nodo) {
    if (nodo != nullptr) {
        inorden(nodo->izquierdo);
        cout << nodo->valor << " ";
        inorden(nodo->derecho);
    }
}

void ArbolBinarioOrdenado::postorden(Nodo* nodo) {
    if (nodo != nullptr) {
        postorden(nodo->izquierdo);
        postorden(nodo->derecho);
        cout << nodo->valor << " ";
    }
}

bool ArbolBinarioOrdenado::buscar(int valor) {
    Nodo* actual = raiz;
    while (actual != nullptr) {
        if (valor == actual->valor) {
            return true;
        }
        else if (valor < actual->valor) {
            actual = actual->izquierdo;
        }
        else {
            actual = actual->derecho;
        }
    }
    return false;
}

int ArbolBinarioOrdenado::altura(Nodo* nodo) {
    if (nodo == nullptr) {
        return -1;
    }
    int altura_izquierda = altura(nodo->izquierdo);
    int altura_derecha = altura(nodo->derecho);
    return 1 + max(altura_izquierda, altura_derecha);
}

int ArbolBinarioOrdenado::cantidadNodos(Nodo* nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    return 1 + cantidadNodos(nodo->izquierdo) + cantidadNodos(nodo->derecho);
}

int ArbolBinarioOrdenado::sumatoriaValores(Nodo* nodo) {
    if (nodo == nullptr) {
        return 0;
    }
    return nodo->valor + sumatoriaValores(nodo->izquierdo) + sumatoriaValores(nodo->derecho);
}