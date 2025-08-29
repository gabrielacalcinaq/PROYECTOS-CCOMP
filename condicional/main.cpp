#include <iostream>

using namespace std;

int main()
{
    /**
     * CONDICION IF
     *
        if (CONDICION) {
            // SENTENCIA A. se ejecuta si la condicion es verdadera.
        } else {
            // SENTENCIA B.  se ejecuta si la condicion es falsa.
        }
     * OPERADORES LOGICOS
        && - and
        ll - or
        ! -negacion
        ejm a = 10, b=5
                 (a>5)-> true
                 (a<3) -> false
                 (a==8) -> false
                 (a != 8) -> true
                 (a >= 10 && b < 10) -> true
                 (a < 6 ll b == 5)
     */
     int a = 10;
     int b = 5;
      if (a<5) {
        cout << "El número " << b << " es mayor que " << a << endl;

      }
      else {
        cout << "El numero " << a << " es mayor que " << b << endl;
      }

      return 0;
}
