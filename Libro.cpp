/*
 * Proyecto Biblioteca clase "Libro"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 */
#include "Libro.h"
using namespace std;

Libro::Libro(int id, string titulo, int paginas, string autor)
    : RecursoDigital(id, titulo, "Libro"), paginas(paginas), autor(autor) {}

int Libro::calcular_duracion() {
    return paginas;
}

string Libro::mostrar_info() {
    return "Libro: " + titulo + " de " + autor + ", paginas: " + 
    to_string(paginas) + ", calificacion: " + to_string(clasificacion);
}
