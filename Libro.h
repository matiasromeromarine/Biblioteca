#ifndef LIBRO_H
#define LIBRO_H

#include "RecursoDigital.h"
using namespace std;

class Libro : public RecursoDigital {
private:
    int paginas;
    string autor;
public:
    Libro(int id, string titulo, int paginas, string autor);
    int calcular_duracion();
    string mostrar_info();
};

#endif