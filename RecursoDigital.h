/*
 * Proyecto Biblioteca clase "RecursoDigital"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * Clase Abstracta
 */
#ifndef RECURSO_DIGITAL_H
#define RECURSO_DIGITAL_H

#include <string>
using namespace std;

class RecursoDigital {
protected:
    int id;
    string titulo;
    string tipo;
    double clasificacion;
public:
    RecursoDigital(int id, string titulo, string tipo);
// Implementación de polimorfismo y clase abstracta con la función virtual pura
    virtual int calcular_duracion() = 0;
// Implementación de polimorfismo y clase abstracta con la función virtual pura
    virtual string mostrar_info() = 0;
    void actualizar_clasificacion(double nueva);
    int getId();
    string getTitulo();
    string getTipo();
    double getClasificacion();
// Implementación de polimorfismo con la función pura
    virtual ~RecursoDigital() = default;
};

#endif
