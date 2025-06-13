/*
 * Proyecto Biblioteca clase "Audiolibro"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 */
#include "Audiolibro.h"
using namespace std;

Audiolibro::Audiolibro(int id, string titulo, int duracion_min, string narrador)
    : RecursoDigital(id, titulo, "Audiolibro"), duracion_min(duracion_min), 
    narrador(narrador) {}

int Audiolibro::calcular_duracion() {
    return duracion_min;
}

string Audiolibro::mostrar_info() {
    return "Audiolibro: " + titulo + " narrado por " + narrador + ", duracion: "
     + to_string(duracion_min) + " min, calificacion: " 
     + to_string(clasificacion);
}
