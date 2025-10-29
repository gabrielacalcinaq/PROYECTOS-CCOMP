#include "Point.h"

Point::Point()

     x = 0;
     y = 0;
     std::cout << "Llamando al constructor" << std::endl;

Point::Point(int_x, int_y)
{
    x = _x;
    y = _y;
    std::cout<<"Llamando al constructor" << std::endl;
}

Point::~Point()
{
    std::cout << "Llamando al destructor" << std::endl
}

void Point::print() const {
    std::cout << "{" << x << "," << y << "}"
}

Aquí tienes un ejemplo en C++ que define una clase `Estudiante` con atributos `nombre` y `edad`, un constructor para inicializarlos, y luego los imprime en la función `main`:

```cpp
#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Estudiante(string n, int e) {
        nombre = n;
        edad = e;
    }

    // Método para mostrar los datos
    void mostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

int main() {
    // Crear un objeto Estudiante
    Estudiante estudiante1("Carlos", 22);

    // Mostrar los datos
    estudiante1.mostrarDatos();

    return 0;
}
```

🧪 Puedes cambiar `"Carlos"` y `22` por cualquier otro nombre y edad. ¿Quieres que el usuario ingrese los datos por teclado? Puedo ayudarte a modificar el código para eso también.

crear un estudiante con nombe y edad con un constructor para
iniciañizar su nombre y su edad, crear en el main
e imprimir nombre y edad
