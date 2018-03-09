#include "Struct.h"

Nodo::Nodo(int valor)
{
    this->valor = valor;
    this->altura = 0;
}

Nodo* Nodo::get_hijo_derecho()
{
    return hijo_derecho;
}

Nodo* Nodo::get_hijo_izquierdo()
{
    return hijo_izquierdo;
}

int Nodo::getAltura()
{
    return this->altura;
}

int Nodo::get_valor()
{
    return this->valor;
}

void Nodo::setAltura(int altura)
{
    this->altura = altura;
}

void Nodo::set_hijo_der(Nodo *hijo)
{
    this->hijo_derecho = hijo;
}

void Nodo::set_hijo_izq(Nodo *hijo)
{
    this->hijo_izquierdo = hijo;
}

int Nodo::get_valor_derecho()
{
    return hijo_derecho->valor;
}

int Nodo::get_valor_izquierdo()
{
    return hijo_izquierdo->valor;
}