#ifndef ARBOLESAVL_ITEMS_H
#define ARBOLESAVL_ITEMS_H

class Nodo
{
private:
    int valor;
    int altura;
    Nodo* hijo_izquierdo;
    Nodo* hijo_derecho;

public:
    Nodo(int valor);
    Nodo* get_hijo_derecho();
    Nodo* get_hijo_izquierdo();
    int getAltura();
    int get_valor();
    int get_valor_izquierdo();
    int get_valor_derecho();
    void setAltura(int altura);
    void set_hijo_izq(Nodo* hijo);
    void set_hijo_der(Nodo* hijo);
};


#endif //ARBOLESAVL_ITEMS_H
