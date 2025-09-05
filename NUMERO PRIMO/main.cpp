#include <iostream>

using namespace std;

int main()
{
    /**Implemente un programa solicite un numero por teclado que solicite un numer e indique si es primo 
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

    /**Solicita un numero e imprima los numeros primos menores que dicho numeros
#include <iostream>*/

int main() {
    int numero;
    
    
    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;
    
   
    if (numero >= 2) {
        std::cout << "Los numeros primos menores que " << numero << " son:" << std::endl;
        
        int i = 2; 
        
        while (i < numero) {
            bool es_primo = true; 
            int j = 2;
            
            
            while (j * j <= i) {
                if (i % j == 0) {
                    es_primo = false; 
                    break;
                }
                j++;
            }
            
            
            if (es_primo) {
                std::cout << i << " ";
            }
            
            i++;
        }
        std::cout << std::endl;
    } else {
        std::cout << "No hay numeros primos menores que " << numero << "." << std::endl;
    }
    
    return 0;
}
