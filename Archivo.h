#ifndef ARBOLESAVL_ARCHIVO_H
#define ARBOLESAVL_ARCHIVO_H

#include "Arbol.h"
#include <fstream>

using namespace std;

class Archivo
{
private:
    fstream archivo;
    Arbol* arbol;

public:
    void open_file();
    void close_file();
    void importar_arbol();
    void actualizar_archivo();
    void add_nodo(int valor);
};


#endif //ARBOLESAVL_ARCHIVO_H
