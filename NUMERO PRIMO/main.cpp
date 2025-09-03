#include <iostream>

using namespace std;

int main()
{
    /**Implemente un programa solicite un numero por teclado que solicite un numer e indique si es primo */
    int num;

    cout <<"ingrese un numero";
    long long n, i=1, d=0;
    cin >>num;
    while (i<=1){
        if (n%i==0){
            d++;
        }
        i++;
    }
    cout<<((d==2)? "primo":"no primo");

    /**Solicita un numero e imprima los numeros primos menores que dicho numeros*/

    return 0;
}
