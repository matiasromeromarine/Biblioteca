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
    virtual int calcular_duracion() = 0;
    virtual string mostrar_info() = 0;
    void actualizar_clasificacion(double nueva);
    int getId();
    string getTitulo();
    string getTipo();
    double getClasificacion();
    virtual ~RecursoDigital() = default;
};

#endif