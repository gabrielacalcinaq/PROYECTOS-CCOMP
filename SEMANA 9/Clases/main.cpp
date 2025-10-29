#include <iostream>

using namespace std;

class estudiante{
private:
    string nombre;
    int edad;

public:
    Estudiante(string n, int e){
    nombre = n;
    edad = e;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};
