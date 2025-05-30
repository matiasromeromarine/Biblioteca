#include "Audiolibro.h"
#include <iostream>
using namespace std;

Audiolibro::Audiolibro(string id, string titulo, string autor, int year, int duracion): RecursoDigital(id, titulo, autor, year), duracion(duracion) {}
Audiolibro::~Audiolibro() {}

void Audiolibro::mostrarInfo() {
    cout << "Audiolibro [ID: " << id
         << ", Título: " << titulo
         << ", Autor: " << autor
         << ", Year: " << year
         << ", Duración: " << duracion
         << " min, Rating: " << obtenerPromedioCalificaciones()
         << "]\n";
}

int Audiolibro::calcularDuracion() {
    return duracion;
}
