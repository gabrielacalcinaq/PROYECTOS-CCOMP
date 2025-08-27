#include <iostream>

using namespace std;

int main()
{
   // para cracter se usas comillas siempre
   char car = 'ñ';

   int val = static_cast<int>(car) ;
   cout << sizeof(car) << endl;
   cout << "El valor entero es: " << val << endl;
   return 0;
}
