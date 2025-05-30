#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include <vector>
#include <string>
#include <memory>
#include <algorithm>
#include "RecursoDigital.h"
#include "Libro.h"
#include "Pelicula.h"
#include "Audiolibro.h"
using namespace std;

class Biblioteca {
private:
    vector<unique_ptr<RecursoDigital>> recursos;

public:
    Biblioteca();
    ~Biblioteca();

    void agregarRecurso(unique_ptr<RecursoDigital> recurso);
    void agregarRecurso(unique_ptr<Libro> libro);
    void agregarRecurso(unique_ptr<Pelicula> pelicula);
    void agregarRecurso(unique_ptr<Audiolibro> audiolibro);

    RecursoDigital* buscarPorId(string id);
    vector<RecursoDigital*> buscarPorTitulo(string fragmento);
    vector<RecursoDigital*> buscarPorAutor(string autor);
    vector<RecursoDigital*> buscarPorYear(int year);
};

#endif 
