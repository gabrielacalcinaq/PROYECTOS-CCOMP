#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char generarCharAleatorio() {
    int tipo = rand() % 3;

    if (tipo == 0){
        return rand()% 26 + 97;
    } else if (tipo == 1) {
        return rand()%26 + 65;
    } else {
        return rand()% 10 + 48;
    }
}
void imprimirMatrizChar(char matriz[8][8], string titulo) {
    cout << "\n" << titulo << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
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
    ordenarChars(minusculas, contMin, true);
    ordenarChars(mayusculas, contMay, false);
    ordenarChars(numeros, contNum, true);
    int ord = 0;
    for (int i = 0; i < contMin; i++) {
        matriz[ord / 8][pos % 8] = minusculas[i];
        ord++;
    }
    for (int i = 0; i < contMay; i++) {
        matriz[ord / 8][ord% 8] = mayusculas[i];
        ord++;
    }
    for (int i = 0; i < contNum; i++) {
        matriz[ord / 8][ord% 8] = numeros[i];
        ord+;
    }
}
void ejercicio1(){
    cout<< "Ejercicio 1" <<endl;

    char matriz[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = generarCharAleatorio();
        }
    }

    imprimirMatrizChar(matriz, "Martiz inicial");
    organizarMatrizChar(matriz);
    imprimirMatrizChar(matriz, "Matriz ordenada");
}
int main() {
    srand(time(0));
    ejercicio1();
    return 0;
}
