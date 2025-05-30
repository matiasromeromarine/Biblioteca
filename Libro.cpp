#include "Libro.h"
#include <iostream>
using namespace std;

Libro::Libro(string id, string titulo, string autor, int year, int numPaginas): RecursoDigital(id, titulo, autor, year), numPaginas(numPaginas) {}
Libro::~Libro() {}

void Libro::mostrarInfo() {
    cout << "Libro [ID: " << id
         << ", Título: " << titulo
         << ", Autor: " << autor
         << ", Year: " << year
         << ", Páginas: " << numPaginas
         << ", Rating: " << obtenerPromedioCalificaciones()
         << "]\n";
}

int Libro::calcularDuracion() {
    return numPaginas;
}
