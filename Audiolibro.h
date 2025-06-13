/*
 * Proyecto Biblioteca clase "Audiolibro"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * Clase hija
 */
#ifndef AUDIOLIBRO_H
#define AUDIOLIBRO_H

#include "RecursoDigital.h"
using namespace std;

// Implementación de herencia 
class Audiolibro : public RecursoDigital {
private:
    int duracion_min;
    string narrador;
public:
    Audiolibro(int id, string titulo, int duracion_min, string narrador);
// Sobreescritura de método
    int calcular_duracion() override;
// Sobreescritura de método
    string mostrar_info() override;
};

#endif
