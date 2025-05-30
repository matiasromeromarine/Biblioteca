#include "Usuario.h"
#include <iostream>
using namespace std;

Usuario::Usuario(string id, string nombre): id(id), nombre(nombre) {}
Usuario::~Usuario() {}

void Usuario::valorarRecurso(RecursoDigital* recurso, double calificacion) {
    recurso->agregarCalificacion(calificacion);
    historial.push_back(recurso);
}

vector<RecursoDigital*> Usuario::getHistorial() {
    return historial;
}

void Usuario::mostrarHistorial() {
    if (historial.empty()) {
        cout << "Historial vacío." << endl;
        return;
    }
    cout << "Historial de " << nombre << ":" << endl;
    for (auto recurso : historial) {
        recurso->mostrarInfo();
    }
}
