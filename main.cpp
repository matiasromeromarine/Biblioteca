#include <iostream>
#include <string>
#include <limits>
#include "Biblioteca.h"
#include "Usuario.h"
using namespace std;

int main() {
    cout << "===== Biblioteca Digital =====" << endl;
    Biblioteca biblioteca;
    Usuario usuario("Invitado");
    bool running = true;
    while (running) {
        cout << "\nSeleccione una opcion:\n"
             << "1) Agregar Libro\n"
             << "2) Agregar Pelicula\n"
             << "3) Agregar Audiolibro\n"
             << "4) Valorar recurso\n"
             << "5) Buscar por titulo\n"
             << "6) Recomendar por tipo\n"
             << "7) Mejor calificado\n"
             << "0) Salir\n"
             << "Opcion: ";
        int opcion;
        cin >> opcion;

        if (opcion == 0) {
            running = false;
            cout << "Saliendo del programa. Hasta luego!" << endl;
        }
        else if (opcion == 1) {
            cout << "\n[Agregar Libro]" << endl;
            cout << "Ingrese ID: "; int id; cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese titulo: "; string titulo; getline(cin, titulo);
            cout << "Ingrese autor: "; string autor; getline(cin, autor);
            cout << "Ingrese paginas: "; int paginas; cin >> paginas;
            biblioteca.agregar_libro(id, titulo, paginas, autor);
            cout << "Libro agregado con exito." << endl;
        }
        else if (opcion == 2) {
            cout << "\n[Agregar Pelicula]" << endl;
            cout << "Ingrese ID: "; int id; cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese titulo: "; string titulo; getline(cin, titulo);
            cout << "Ingrese director: "; string director; getline(cin, director);
            cout << "Ingrese duracion (minutos): "; int dur; cin >> dur;
            biblioteca.agregar_pelicula(id, titulo, dur, director);
            cout << "Pelicula agregada con exito." << endl;
        }
        else if (opcion == 3) {
            cout << "\n[Agregar Audiolibro]" << endl;
            cout << "Ingrese ID: "; int id; cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ingrese titulo: "; string titulo; getline(cin, titulo);
            cout << "Ingrese narrador: "; string narrador; getline(cin, narrador);
            cout << "Ingrese duracion (minutos): "; int dur; cin >> dur;
            biblioteca.agregar_audiolibro(id, titulo, dur, narrador);
            cout << "Audiolibro agregado con exito." << endl;
        }
        else if (opcion == 4) {
            cout << "\n[Valorar recurso]" << endl;
            cout << "Ingrese ID: ";
            int id;
            cin >> id;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Ingrese calificacion (0-5): ";
            double calif;
            cin >> calif;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            usuario.valorar_recurso(biblioteca, id, calif);
            cout << "Calificacion registrada." << endl;
        }
        else if (opcion == 5) {
            cout << "\n[Buscar por titulo]" << endl;
            cout << "Ingrese titulo exacto: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            string titulo;
            getline(cin, titulo);
            RecursoDigital* resultados[MAX_RECURSOS];
            int count = biblioteca.buscar_por_titulo(titulo, resultados);
            cout << "\nResultados encontrados:" << endl;
            for (int i = 0; i < count; ++i) {
                cout << resultados[i]->mostrar_info() << endl;
            }
        }
        else if (opcion == 6) {
            cout << "\n[Recomendar por tipo]" << endl;
            cout << "Ingrese tipo (Libro/Pelicula/Audiolibro): ";
            string tipo;
            cin >> tipo;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            RecursoDigital* resultados[MAX_RECURSOS];
            int count = biblioteca.recomendar_por_tipo(tipo, resultados);
            cout << "\nRecomendaciones:" << endl;
            for (int i = 0; i < count; ++i) {
                cout << resultados[i]->mostrar_info() << endl;
            }
        }
        else if (opcion == 7) {
            cout << "\n[Mejor calificado]" << endl;
            RecursoDigital* r = biblioteca.recomendar_mejor_calificado();
            cout << "Mejor recurso calificado:" << endl;
            if (r) cout << r->mostrar_info() << endl;
        }
    }
    return 0;
}
