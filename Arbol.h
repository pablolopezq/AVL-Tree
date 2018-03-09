#ifndef ARBOLESAVL_ARBOL_H
#define ARBOLESAVL_ARBOL_H

#include "Struct.h"

class Arbol
{
private:
    Nodo* raiz;

public:
    Arbol();
    Arbol(int valor);
    Nodo* add_nodo(int valor);
    Nodo* add_nodo_aux(Nodo* raiz, Nodo* nuevo);
    Nodo* rotacion_simple_derecha(Nodo* x);
    Nodo* rotacion_simple_izquierda(Nodo* x);
    int getAltura(int valor);
    int get_balance(Nodo* nodo);
    int max(int a, int b);
    bool is_empty();
};


#endif //ARBOLESAVL_ARBOL_H
