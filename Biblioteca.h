/*
 * Proyecto Biblioteca clase "Biblioteca"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 * "Clase que contiene los recursos guardados"
 */
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "RecursoDigital.h"
#include <string>
using namespace std;

const int MAX_RECURSOS = 100;

class Biblioteca {
private:
// Uso de punteros
    RecursoDigital* recursos[MAX_RECURSOS];
    int total_recursos;
public:
    Biblioteca();
    void agregar_libro(int id, string titulo, int paginas, string autor);
    void agregar_pelicula(int id, string titulo, int duracion_min, 
        string director);
    void agregar_audiolibro(int id, string titulo, int duracion_min, 
        string narrador);
// Uso de punteros
    int buscar_por_titulo(string titulo, RecursoDigital* resultados[]);
// Uso de punteros
    int recomendar_por_tipo(string tipo, RecursoDigital* resultados[]);
// Uso de punteros
    RecursoDigital* recomendar_mejor_calificado();
// Uso de punteros
    RecursoDigital* buscar_por_id(int id);
    ~Biblioteca();
};

#endif
