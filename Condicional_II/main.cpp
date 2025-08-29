#include <iostream>

using namespace std;

int main()
{
    char val;
    cout << "Ingresa un caracter por favor";
    cin >> val;

    cout << "El valor de la variable es: " << val << endl;
    int num = static_cast<int>(val);
    cout <<"El valor numerico es: " <<num << endl;


    /**
    *ESCRIBIR UN PROGRAMA QUE INDIQUE SI EL VALOR INGRESADO ES UNA lETRA MAYUSCULA
    alt124
    */

    if (num >= 65 && num <= 90) {
            cout << "es MAYUSCULA" <<endl;
    } else if (num >= 97 && num <= 122) {
    cout<<"no es MINUSCULA"<< endl;
    }

    /** Evaluar si el valor ingresado es un numero
    */

    if (num >= 48&& num <=57) {
        cout << "El caracter ingresado es un numero"<<endl;
    } else {
    cout << "No es un NUMERO" <<endl;
    }



     return 0;
}
