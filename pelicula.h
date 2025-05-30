#ifndef PELICULA_H
#define PELICULA_H

#include "RecursoDigital.h"
using namespace std;

class Pelicula : public RecursoDigital {
private:
    int duracion;
public:
    Pelicula(string id, string titulo, string autor, int year, int duracion);
    ~Pelicula();

    void mostrarInfo();
    int calcularDuracion();
};

#endif 
