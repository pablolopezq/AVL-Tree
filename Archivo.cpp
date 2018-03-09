#include "Archivo.h"

void Archivo::open_file()
{
    archivo.open("datos.dat", ios::binary | ios::in | ios::out);
}

void Archivo::close_file()
{
    archivo.close();
}

void Archivo::add_nodo(int valor)
{
    arbol->add_nodo(valor);
}

void Archivo::importar_arbol()
{
    arbol = new Arbol();
    char* read = new char[4];
    long offset, pos, value, num_nodos;

    archivo.seekg(0, ios::end);
    pos = archivo.tellg();
    num_nodos = pos/4;
    num_nodos = num_nodos*(1/3);

    archivo.read(read, 4);
    pos = atoi(read);
    offset = pos*4;

    for (int i = 0; i < num_nodos; ++i)
    {
        
    }
}