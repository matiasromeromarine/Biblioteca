#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "RecursoDigital.h"
using namespace std;

class Usuario {
private:
    string id;
    string nombre;
    vector<RecursoDigital*> historial;

public:
    Usuario(string id, string nombre);
    ~Usuario();

    void valorarRecurso(RecursoDigital* recurso, double calificacion);
    vector<RecursoDigital*> getHistorial();
    void mostrarHistorial();
};

#endif 
