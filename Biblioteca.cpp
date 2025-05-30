#include "Biblioteca.h"
#include "Libro.h"
#include "Pelicula.h"
#include "Audiolibro.h"
#include <algorithm>
using namespace std;

Biblioteca::Biblioteca()
    : total_recursos(0) {}

void Biblioteca::agregar_libro(int id, string titulo, int paginas, string autor) {
    RecursoDigital* r = new Libro(id, titulo, paginas, autor);
    recursos.push_back(r);
    total_recursos++;
}

void Biblioteca::agregar_pelicula(int id, string titulo, int duracion_min, string director) {
    RecursoDigital* r = new Pelicula(id, titulo, duracion_min, director);
    recursos.push_back(r);
    total_recursos++;
}

void Biblioteca::agregar_audiolibro(int id, string titulo, int duracion_min, string narrador) {
    RecursoDigital* r = new Audiolibro(id, titulo, duracion_min, narrador);
    recursos.push_back(r);
    total_recursos++;
}

vector<RecursoDigital*> Biblioteca::buscar_por_titulo(string titulo) {
    vector<RecursoDigital*> result;
    for (auto* r : recursos) {
        if (r->getTitulo() == titulo) {
            result.push_back(r);
        }
    }
    return result;
}

vector<RecursoDigital*> Biblioteca::recomendar_por_tipo(string tipo) {
    vector<RecursoDigital*> result;
    for (auto* r : recursos) {
        if (r->getTipo() == tipo) {
            result.push_back(r);
        }
    }
    sort(result.begin(), result.end(), [](RecursoDigital* a, RecursoDigital* b) {
        return a->getClasificacion() > b->getClasificacion();
    });
    return result;
}

RecursoDigital* Biblioteca::recomendar_mejor_calificado() {
    if (recursos.empty()) return nullptr;
    return *max_element(recursos.begin(), recursos.end(), [](RecursoDigital* a, RecursoDigital* b) {
        return a->getClasificacion() < b->getClasificacion();
    });
}

RecursoDigital* Biblioteca::buscar_por_id(int id) {
    for (auto* r : recursos) {
        if (r->getId() == id) {
            return r;
        }
    }
    return nullptr;
}

Biblioteca::~Biblioteca() {
    for (auto* r : recursos) {
        delete r;
    }
}