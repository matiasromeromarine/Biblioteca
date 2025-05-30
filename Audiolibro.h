#ifndef AUDIOLIBRO_H
#define AUDIOLIBRO_H

#include "RecursoDigital.h"
using namespace std;

class Audiolibro : public RecursoDigital {
private:
    int duracion_min;
    string narrador;
public:
    Audiolibro(int id, string titulo, int duracion_min, string narrador);
    int calcular_duracion() override;
    string mostrar_info() override;
};

#endif