#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "RecursoDigital.h"
#include <string>
using namespace std;

const int MAX_RECURSOS = 100;
class Biblioteca {
private:
    RecursoDigital* recursos[MAX_RECURSOS];
    int total_recursos;
public:
    Biblioteca();
    void agregar_libro(int id, string titulo, int paginas, string autor);
    void agregar_pelicula(int id, string titulo, int duracion_min, string director);
    void agregar_audiolibro(int id, string titulo, int duracion_min, string narrador);
    int buscar_por_titulo(string titulo, RecursoDigital* resultados[]);
    int recomendar_por_tipo(string tipo, RecursoDigital* resultados[]);
    RecursoDigital* recomendar_mejor_calificado();
    RecursoDigital* buscar_por_id(int id);
    ~Biblioteca();
};

#endif
