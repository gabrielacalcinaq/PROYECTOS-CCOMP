#include <iostream>

using namespace std;
/**
*COSTRUCTOR(mismo nombre que la clase)
    Metodo que se invoca cuando se crea una instancia.
    Metodo que se invca cuando se asigna memoria a una instancia

*DESTRUCTOR(mismo nombre que la clase pero le antecede)
*/
int main()
{
    Point p1;
    cout << endl;
    p1.print();
    cout << endl;

    Point* ptr = new Point;
    cout << endl,
    ptr->print();
    (*ptr).print();
    cout << endl;

    Point p3(4, 5);
    cout << endl;

    delete ptr;

    return 0;
}
