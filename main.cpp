#include <iostream>
#include "Archivo.h"

int main()
{
    Arbol* arbol = new Arbol(5);
    cout << arbol->is_empty() << endl;
    arbol->add_nodo(6);
    return 0;
}