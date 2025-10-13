#include <iostream>
using namespace std;
/*Pide un número entero de 5 dígitos. Sin convertirlo a cadena, extrae
cada uno de sus dígitos. Calcula la suma de los dígitos en posiciones impares
(1ro, 3ro, 5to) y el producto de los dígitos en posiciones pares (2do, 4to).
Muestra ambos resultados*/

int main()
{
    int num;
    std::cout << "Ingresa un numero de 5 digitos" << std::endl;
    std::cin >> num;

    int n1 = num/10000;
    int n2 = (num/1000)%10;
    int n3 = (num/100)%10;
    int n4 = (num/10)%10;
    int n5 = num%10;

    cout << n1+n3+n5 << endl;
    cout << n2*n4 << endl;

    return 0;
}

//--------------------------------------

#include <iostream>
int main(){

long long fibo_iterativo(int n) {
    // Casos base dados en el examen
    if (n <= 1) {
        return 1;
    }

    long long a = 1; // Corresponde a fibo(0)
    long long b = 1; // Corresponde a fibo(1)
    long long resultado;

    // Empezamos desde 2 porque ya tenemos los casos 0 y 1
    for (int i = 2; i <= n; i++) {
        resultado = a + b;
        a = b;
        b = resultado;
    }
    return resultado;
}
return 0;
}
