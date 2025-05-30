#include "RecursoDigital.h"
#include <iostream>
using namespace std;

RecursoDigital::RecursoDigital(string id, string titulo, string autor, int year): id(id), titulo(titulo), autor(autor), year(year) {}

string RecursoDigital::getId() { return id; }
string RecursoDigital::getTitulo() { return titulo; }
string RecursoDigital::getAutor() { return autor; }
int    RecursoDigital::getYear() { return year; }

void RecursoDigital::agregarCalificacion(double calificacion) {
    bool valido = false;
    for (double c = 0.0; c <= 5.0; c += 0.5) {
        if (calificacion == c) { valido = true; break; }
    }
    if (!valido) throw invalid_argument("Calificación no válida (0.0-5.0 en pasos de 0.5).");
    calificaciones.push_back(calificacion);
}

double RecursoDigital::obtenerPromedioCalificaciones() {
    if (calificaciones.empty()) return 0.0;
    double suma = 0.0;
    for (double c : calificaciones) suma += c;
    return suma / calificaciones.size();
}
