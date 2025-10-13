#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char generarCharAleatorio() {
    int tipo = rand() % 3;

    if (tipo == 0) {
        return rand()%25+97 ;
    } else if (tipo == 1) {
        return rand()%25+65;
    } else {
        return rand()%9+48;
    }
}
void ordenarChars(char arr[], int tamaño, bool ascendente = true) {
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            bool intercambiar = false;

            if (ascendente && arr[j] > arr[j + 1]) {
                intercambiar = true;
            } else if (!ascendente && arr[j] < arr[j + 1]) {
                intercambiar = true;
            }

            if (intercambiar) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void organizarMatrizChar(char matriz[8][8]) {

    char minusculas[64];
    char mayusculas[64];
    char numeros[64];
    int contMin = 0, contMay = 0, contNum = 0;


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char c = matriz[i][j];

            if (c >= 'a' && c <= 'z') {
                minusculas[contMin++] = c;
            } else if (c >= 'A' && c <= 'Z') {
                mayusculas[contMay++] = c;
            } else if (c >= '0' && c <= '9') {
                numeros[contNum++] = c;
            }
        }
    }


    ordenarChars(minusculas, contMin, true);   // a-z ascendente
    ordenarChars(mayusculas, contMay, false);  // Z-A descendente
    ordenarChars(numeros, contNum, true);      // 0-9 ascendente


    int pos = 0;
    for (int i = 0; i < contMin; i++) {
        matriz[pos / 8][pos % 8] = minusculas[i];
        pos++;
    for (int i = 0; i < contMay; i++) {
        matriz[pos / 8][pos % 8] = mayusculas[i];
        pos++;
    for (int i = 0; i < contNum; i++) {
        matriz[pos / 8][pos % 8] = numeros[i];
        pos++;
    }
}

void ejercicio1() {
    cout << "Ejercicio 1" << endl;

    char matriz[8][8];

    // Generar matriz aleatoria
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = generarCharAleatorio();
        }
    }

    imprimirMatrizChar(matriz, "MATRIZ ORIGINAL");

    organizarMatrizChar(matriz);

    imprimirMatrizChar(matriz, "MATRIZ ORGANIZADA");
}
