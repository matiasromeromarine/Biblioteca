#ifndef LIBRO_H
#define LIBRO_H

#include "RecursoDigital.h"
using namespace std;

class Libro : public RecursoDigital {
private:
    int numPaginas;
public:
    Libro(string id, string titulo, string autor, int year, int numPaginas);
    ~Libro();

    void mostrarInfo();
    int calcularDuracion();
};

#endif 
