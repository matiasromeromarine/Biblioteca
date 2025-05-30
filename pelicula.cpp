#include "Pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula(string id, string titulo, string autor, int year, int duracion): RecursoDigital(id, titulo, autor, year), duracion(duracion) {}
Pelicula::~Pelicula() {}

void Pelicula::mostrarInfo() {
    cout << "Película [ID: " << id
         << ", Título: " << titulo
         << ", Director: " << autor
         << ", Year: " << year
         << ", Duración: " << duracion
         << " min, Rating: " << obtenerPromedioCalificaciones()
         << "]\n";
}

int Pelicula::calcularDuracion() {
    return duracion;
}
