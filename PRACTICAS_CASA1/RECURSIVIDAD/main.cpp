#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false;  // Los números <= 1 no son primos
    if (numero == 2) return true;   // 2 es primo
    if (numero % 2 == 0) return false; // Números pares > 2 no son primos

    // Verificar divisibilidad desde 3 hasta la raíz cuadrada del número
    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para generar un número primo aleatorio entre 1 y 100
int generarPrimo() {
    int numero;
    do {
        numero = 1 + rand() % 100;  // Genera número entre 1 y 100
    } while (!esPrimo(numero));     // Repite hasta encontrar un primo

    return numero;
}

// Función para llenar la matriz
void llenarMatriz(int matriz[8][8]) {
    // Llenar las primeras 7 filas con números aleatorios normales
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 8; j++) {
            matriz[i][j] = 1 + rand() % 100;
        }
    }

    // Llenar la última fila (fila 7) con números primos
    for (int j = 0; j < 8; j++) {
        matriz[7][j] = generarPrimo();
    }
}

// Función para mostrar la matriz de forma elegante
void mostrarMatriz(int matriz[8][8]) {
    cout << "\n┌";
    for (int j = 0; j < 8; j++) cout << "──────";
    cout << "┐" << endl;

    for (int i = 0; i < 8; i++) {
        cout << "│";
        for (int j = 0; j < 8; j++) {
            // Formatear para que los números se vean alineados
            if (matriz[i][j] < 10) cout << "  ";
            else if (matriz[i][j] < 100) cout << " ";

            // Marcar los números primos de la última fila
            if (i == 7) {
                cout << " " << matriz[i][j] << "P│";
            } else {
                cout << " " << matriz[i][j] << " │";
            }
        }
        cout << endl;

        if (i < 7) {
            cout << "├";
            for (int j = 0; j < 8; j++) cout << "──────";
            cout << "┤" << endl;
        }
    }

    cout << "└";
    for (int j = 0; j < 8; j++) cout << "──────";
    cout << "┘" << endl;
}

// Función recursiva para verificar que todos en la última fila son primos
bool verificarUltimaFila(int fila[], int indice = 0) {
    if (indice >= 8) return true;  // Caso base: llegamos al final
    if (!esPrimo(fila[indice])) return false;  // Si uno no es primo, retorna false
    return verificarUltimaFila(fila, indice + 1);  // Llamada recursiva
}

int main() {
    // Semilla para números aleatorios
    srand(time(0));

    int matriz[8][8];

    cout << "=== MATRIZ 8x8 CON ÚLTIMA FILA DE NÚMEROS PRIMOS ===" << endl;

    // Llenar la matriz
    llenarMatriz(matriz);

    // Mostrar la matriz
    mostrarMatriz(matriz);

    // Verificación
    cout << "\n=== VERIFICACIÓN ===" << endl;
    if (verificarUltimaFila(matriz[7])) {
        cout << "✓ TODOS los números de la última fila son primos" << endl;
    } else {
        cout << "✗ ERROR: No todos los números de la última fila son primos" << endl;
    }

    // Mostrar los primos de la última fila
    cout << "\nNúmeros primos en la última fila: ";
    for (int j = 0; j < 8; j++) {
        cout << matriz[7][j] << " ";
    }
    cout << endl;

    return 0;
}
