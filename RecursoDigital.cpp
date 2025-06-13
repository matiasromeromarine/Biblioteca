/*
 * Proyecto Biblioteca clase "RecursoDigital"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 */
#include "RecursoDigital.h"
using namespace std;

RecursoDigital::RecursoDigital(int id, string titulo, string tipo)
    : id(id), titulo(titulo), tipo(tipo), clasificacion(0.0) {}

void RecursoDigital::actualizar_clasificacion(double nueva) {
    clasificacion = nueva;
}

int RecursoDigital::getId() {
    return id;
}

string RecursoDigital::getTitulo() {
    return titulo;
}

string RecursoDigital::getTipo() {
    return tipo;
}

double RecursoDigital::getClasificacion() {
    return clasificacion;
}
