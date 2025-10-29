#include <iostream>

using namespace std;

int main()
{
    Punto p1;
    Punto p2(3, 4);

    p1.print()
    p2.print();

    VectorGeometrico vg(p1, p2);
    vg.print();
    cout << "
    return 0;
}
