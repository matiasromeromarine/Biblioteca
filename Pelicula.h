/*
 * Proyecto Biblioteca clase "Pelicula"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * Clase hija
 */
#ifndef PELICULA_H
#define PELICULA_H

#include "RecursoDigital.h"
using namespace std;

// Implementación de herencia: la clase hereda de su clase base
class Pelicula : public RecursoDigital {
private:
    int duracion_min;
    string director;
public:
    Pelicula(int id, string titulo, int duracion_min, string director);
    int calcular_duracion() override;
    string mostrar_info() override;
};

#endif
