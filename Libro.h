/*
 * Proyecto Biblioteca clase "Libro"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * Clase Hija
 */
#ifndef LIBRO_H
#define LIBRO_H

#include "RecursoDigital.h"
using namespace std;

// Implementación de herencia: la clase hereda de su clase base
class Libro : public RecursoDigital {
private:
    int paginas;
    string autor;
public:
    Libro(int id, string titulo, int paginas, string autor);
    int calcular_duracion() override;
    string mostrar_info() override;
};

#endif
