#ifndef RECURSODIGITAL_H
#define RECURSODIGITAL_H
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

class RecursoDigital {
protected:
    string id;
    string titulo;
    string autor;
    int year;
    vector<double> calificaciones;

public:
    RecursoDigital(string id, string titulo, string autor, int year);
    virtual ~RecursoDigital() = default;

    string getId();
    string getTitulo();
    string getAutor();
    int getYear();

    void agregarCalificacion(double calificacion);
    double obtenerPromedioCalificaciones();

    virtual void mostrarInfo() = 0;
    virtual int calcularDuracion() = 0;
};

#endif 
