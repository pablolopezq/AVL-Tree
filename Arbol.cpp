#include <cstddef>
#include "Arbol.h"

Arbol::Arbol()
{
    raiz = nullptr;
}

Arbol::Arbol(int valor)
{
    raiz = new Nodo(valor);
}

int Arbol::get_balance(Nodo *nodo)
{
    return nodo->get_hijo_izquierdo()->getAltura() - nodo->get_hijo_derecho()->getAltura();
}

int Arbol::max(int a, int b)
{
    return (a > b)? a : b;
}

Nodo* Arbol::add_nodo(int valor)
{
    Nodo* nuevo = new Nodo(valor);
    return add_nodo_aux(this->raiz, nuevo);
}

Nodo* Arbol::rotacion_simple_derecha(Nodo* x)
{
    Nodo* y = x->get_hijo_derecho();
    Nodo* T2 = y->get_hijo_izquierdo();

    Nodo* y_izq = y->get_hijo_izquierdo();
    Nodo* x_der = x->get_hijo_derecho();
    y_izq = x;
    x_der = T2;

    int altura = max(y->get_hijo_derecho()->getAltura(), y->get_hijo_izquierdo()->getAltura());
    y->setAltura(altura+1);
    altura = max(x->get_hijo_derecho()->getAltura(), x->get_hijo_izquierdo()->getAltura());
    x->setAltura(altura+1);

    return y;
}

Nodo* Arbol::rotacion_simple_izquierda(Nodo* x)
{
    Nodo* y = x->get_hijo_izquierdo();
    Nodo* T2 = y->get_hijo_derecho();

    Nodo* y_der = y->get_hijo_derecho();
    Nodo* x_izq = x->get_hijo_izquierdo();
    y_der = x;
    x_izq = T2;

    int altura = max(y->get_hijo_derecho()->getAltura(), y->get_hijo_izquierdo()->getAltura());
    y->setAltura(altura+1);
    altura = max(x->get_hijo_derecho()->getAltura(), x->get_hijo_izquierdo()->getAltura());
    x->setAltura(altura+1);

    return y;
}

Nodo* Arbol::add_nodo_aux(Nodo *raiz, Nodo *nuevo)
{
    if(raiz == NULL)
    {
        raiz = nuevo;
    }
    else if(nuevo->get_valor() < raiz->get_valor_izquierdo())
    {
        Nodo* raiz_izq = raiz->get_hijo_izquierdo();
        raiz_izq = add_nodo_aux(raiz->get_hijo_izquierdo(), nuevo);
    }
    else if(nuevo->get_valor() > raiz->get_valor_izquierdo())
    {
        Nodo* raiz_der = raiz->get_hijo_derecho();
        raiz_der = add_nodo_aux(raiz->get_hijo_derecho(), nuevo);
    }
    else
    {
        return nuevo;
    }

    int balance = get_balance(nuevo);

    if(balance > 1 && nuevo->get_valor() < nuevo->get_hijo_izquierdo()->get_valor())
        return rotacion_simple_derecha(nuevo);
    if(balance < -1 && nuevo->get_valor() > nuevo->get_hijo_derecho()->get_valor())
        return rotacion_simple_izquierda(nuevo);
    if(balance > 1 && nuevo->get_valor() > nuevo->get_hijo_izquierdo()->get_valor())
    {
        Nodo* izq = nuevo->get_hijo_izquierdo();
        izq = rotacion_simple_izquierda(izq);
        return rotacion_simple_derecha(nuevo);
    }
    if(balance < -1 && nuevo->get_valor() < nuevo->get_hijo_derecho()->get_valor())
    {
        Nodo* der = nuevo->get_hijo_derecho();
        der = rotacion_simple_derecha(der);
        return rotacion_simple_izquierda(nuevo);
    }

    return nuevo;
}

bool Arbol::is_empty()
{
    if(raiz == nullptr)
        return true;
    return false;
}