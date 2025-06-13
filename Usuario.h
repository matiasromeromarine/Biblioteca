/*
 * Proyecto Biblioteca clase "Biblioteca"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * Clase para el usuario que usa el sistema
 */
#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "RecursoDigital.h"
using namespace std;

class Biblioteca;

class Usuario {
private:
    string nombre;
public:
    Usuario(string nombre);
    void valorar_recurso(Biblioteca& biblioteca, int id, double calif);
};

#endif
