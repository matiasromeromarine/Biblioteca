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
