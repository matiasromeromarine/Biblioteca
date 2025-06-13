/*
 * Proyecto Biblioteca clase "Pelicula"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 */
#include "Pelicula.h"
using namespace std;

Pelicula::Pelicula(int id, string titulo, int duracion_min, string director)
    : RecursoDigital(id, titulo, "Pelicula"), duracion_min(duracion_min), 
    director(director) {}

int Pelicula::calcular_duracion() {
    return duracion_min;
}

string Pelicula::mostrar_info() {
    return "Pelicula: " + titulo + " de " + director + ", duracion: " + 
    to_string(duracion_min) + " min, calificacion: " + to_string(clasificacion);
}
