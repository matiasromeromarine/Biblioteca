#ifndef AUDIOLIBRO_H
#define AUDIOLIBRO_H

#include "RecursoDigital.h"
using namespace std;

class Audiolibro : public RecursoDigital {
private:
    int duracion;
public:
    Audiolibro(string id, string titulo, string autor, int year, int duracion);
    ~Audiolibro();

    void mostrarInfo();
    int calcularDuracion();
};

#endif 
