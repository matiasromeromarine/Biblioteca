/*
 * Proyecto Biblioteca clase "Usuario"
 * Matías Romero Mariné
 * A01708802
 * 12/06/2025
 */
#include "Usuario.h"
#include "Biblioteca.h"
using namespace std;

Usuario::Usuario(string nombre)
    : nombre(nombre) {}

void Usuario::valorar_recurso(Biblioteca& biblioteca, int id, double calif) {
// Uso de punteros
    RecursoDigital* r = biblioteca.buscar_por_id(id);
    if (r) {
        r->actualizar_clasificacion(calif);
    }
}
