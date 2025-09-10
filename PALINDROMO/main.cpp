#include <iostream>
using namespace std;


int main() {
   /** int numero;
    cout << "Ingresa un numero de 3 a mas digitos: ";
    cin >> numero;

    if (esPalindromo(numero)) {
        cout << "El nnmero " << numero << " es un palindromo." << endl;
    } else {
        cout << "El numero " << numero << " no es un palindromo." << endl;
    }

bool esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 99) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}*/
long n;
cout<<"Ingrese un numero: ";
cin>> n;
int numC=n;
int numDigits=0;
while (numC<0){
    numC/=10;
    numDigits++;
}
while(n>0){
int ini=n/pow(10,numDigits-1);
int fin =n %10;
if(ini !=fin){
    cout<<"No es palindromo"<<endl;
    break;
}
n=(n%static_cast<int>(pow(10,numDigits-1)))/10;
numDigits
}


    return 0;
}
