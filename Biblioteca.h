#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "RecursoDigital.h"
#include <vector>
#include <string>
using namespace std;

class Biblioteca {
private:
    vector<RecursoDigital*> recursos;
    int total_recursos;
public:
    Biblioteca();
    void agregar_libro(int id, string titulo, int paginas, string autor);
    void agregar_pelicula(int id, string titulo, int duracion_min, string director);
    void agregar_audiolibro(int id, string titulo, int duracion_min, string narrador);
    vector<RecursoDigital*> buscar_por_titulo(string titulo);
    vector<RecursoDigital*> recomendar_por_tipo(string tipo);
    RecursoDigital* recomendar_mejor_calificado();
    RecursoDigital* buscar_por_id(int id);
    ~Biblioteca();
};

#endif