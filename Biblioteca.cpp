/*
 * Proyecto Biblioteca clase "Biblioteca"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 *
 */
#include "Biblioteca.h"
#include "Libro.h"
#include "Pelicula.h"
#include "Audiolibro.h"
#include <algorithm>
using namespace std;

Biblioteca::Biblioteca()
    : total_recursos(0) {}

void Biblioteca::agregar_libro(int id, string titulo, int paginas, string autor) {
    if (total_recursos < MAX_RECURSOS) {
        recursos[total_recursos++] = new Libro(id, titulo, paginas, autor);
    }
}

void Biblioteca::agregar_pelicula(int id, string titulo, int duracion_min, string director) {
    if (total_recursos < MAX_RECURSOS) {
        recursos[total_recursos++] = new Pelicula(id, titulo, duracion_min, director);
    }
}

void Biblioteca::agregar_audiolibro(int id, string titulo, int duracion_min, string narrador) {
    if (total_recursos < MAX_RECURSOS) {
        recursos[total_recursos++] = new Audiolibro(id, titulo, duracion_min, narrador);
    }
}

int Biblioteca::buscar_por_titulo(string titulo, RecursoDigital* resultados[]) {
    int count = 0;
    for (int i = 0; i < total_recursos; ++i) {
        if (recursos[i]->getTitulo() == titulo) {
            resultados[count++] = recursos[i];
        }
    }
    return count;
}

int Biblioteca::recomendar_por_tipo(string tipo, RecursoDigital* resultados[]) {
    int count = 0;
    for (int i = 0; i < total_recursos; ++i) {
        if (recursos[i]->getTipo() == tipo) {
            resultados[count++] = recursos[i];
        }
    }

    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (resultados[j]->getClasificacion() > resultados[i]->getClasificacion()) {
// Uso de punteros
                RecursoDigital* temp = resultados[i];
                resultados[i] = resultados[j];
                resultados[j] = temp;
            }
        }
    }
    return count;
}

RecursoDigital* Biblioteca::recomendar_mejor_calificado() {
    if (total_recursos == 0) return nullptr;
// Uso de punteros
    RecursoDigital* best = recursos[0];
    for (int i = 1; i < total_recursos; ++i) {
        if (recursos[i]->getClasificacion() > best->getClasificacion()) {
            best = recursos[i];
        }
    }
    return best;
}

RecursoDigital* Biblioteca::buscar_por_id(int id) {
    for (int i = 0; i < total_recursos; ++i) {
        if (recursos[i]->getId() == id) {
            return recursos[i];
        }
    }
    return nullptr;
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < total_recursos; ++i) {
        delete recursos[i];
    }
}
