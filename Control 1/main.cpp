#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantas letras tendra la palabra? ";
    cin >> n;

    char palabra[100]; // tamaño maximo fijo (puedes cambiarlo)

    cout << "Ingresa la palabra letra por letra:";
    for (int i = 0; i < n; i++) {
        cin >> palabra[i];
    }

    // Verificar si es palindromo
    bool esPalindromo = true;
    for (int i = 0; i < n / 2; i++) {
        if (palabra[i] != palabra[n - 1 - i]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "Es un palindromo." << endl;
    } else {
        cout << "No es un palindromo." << endl;
    }

    return 0;
}
