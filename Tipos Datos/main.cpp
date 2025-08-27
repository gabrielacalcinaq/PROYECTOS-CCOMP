#include <iostream>

using namespace std;

int main()
{
    /**
    Los tipos de datos para manejar ENTEROS son:
        -short: (en memory RAM ocupa 2 bytes)
        -int - long (ocupa 4 bytes)
        - lon long(ocupa 8 bytes)
    */
  short val1 = 32766;
  cout << sizeof (val1) << endl;
  val1 = val1 +1;
  cout << sizeof (val1) << endl;
  val1 = val1 +1;
  cout << sizeof (val1) << endl;

  /**
    SHORT
     2 bytes

     1 byte 8 bits
     1 bytes - 16 bits

     2 en binario es -> 010
     3 en binario es -> 011
     4 en binario es -> 100
     ...
     10 en binario es -> 1010
     255 en binario es -> 11111111
     256 en binario es

   */
    return 0;
}

