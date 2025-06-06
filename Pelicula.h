#ifndef PELICULA_H
#define PELICULA_H

#include "RecursoDigital.h"
using namespace std;

class Pelicula : public RecursoDigital {
private:
    int duracion_min;
    string director;
public:
    Pelicula(int id, string titulo, int duracion_min, string director);
    int calcular_duracion();
    string mostrar_info();
};

#endif