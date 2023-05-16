#include "HeapTree.h"

// Funciones para acceder a datos
int Heap::padre(int pos){
    if (pos % 2 == 0)
        return (pos / 2); 
    return (pos - 1) / 2; 
}

int Heap::hijoIzq(int pos){ 
    return 2 * pos;
}

int Heap::hijoDer(int pos){ 
    return 2 * pos + 1;
}

// Funciones de procesos
bool Heap::empiezaNivel(int pos){ // Es potencia de dos
    return pos > 0 && ((pos & (pos - 1)) == 0);
}

void Heap::permutar(int posPadre, int posHijo){ // Cambia uno por otro
    int padreValor = arbol[posPadre];
    arbol[posPadre] = arbol[posHijo];
    arbol[posHijo] = padreValor;
}

// Funciones del trabajo
void Heap::insertar(int valor){ // Inserta si es menor al tamanno maximo 
                                // La pos 0 siempre queda libre
    if (tamannoMax > cantidad){
        cantidad++;
        arbol[cantidad] = valor;
        int pos = cantidad;
        while (pos > 1 && arbol[padre(pos)] < arbol[pos]){
            permutar(padre(pos), pos);
            pos = padre(pos);
        }
    }
}

void Heap::eliminar(){ // Elimina si hay datos
    if (cantidad > 0){
        arbol[1] = arbol[cantidad];
        arbol[cantidad] = 0;
        cantidad--; // Se le resta 1
        int pos = 1;
        while (pos <= cantidad){
            if (hijoIzq(pos) <= cantidad && arbol[pos] < arbol[hijoIzq(pos)] && arbol[hijoIzq(pos)] > arbol[hijoDer(pos)]){
                permutar(pos, hijoIzq(pos));
                pos = hijoIzq(pos);
                continue;
                }
            if (hijoDer(pos) <= cantidad && arbol[pos] < arbol[hijoDer(pos)]){
                permutar(pos, hijoDer(pos));
                pos = hijoDer(pos);
                continue;
            }
            break;
        }
    }
}

void Heap::imprimir(){ // Imprime los datos por niveles
    for (int pos = 1; pos <= cantidad; pos++){
        if (empiezaNivel(pos))
            cout << endl;
        cout << arbol[pos] << "\t";
    }
    cout << endl;
}