#include <iostream>

using namespace std;

int potencia(int base, int exp)
{
    int result=1;

    //for (inicializacion; condicion; incremento)
    for (int i=0; i<exp; i++){
        result=result*base;
    }
    return result;


    return 0;
}
