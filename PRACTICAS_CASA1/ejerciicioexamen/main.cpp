#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool esPrimo(int num) {
    if(num < 2) return false;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

int main() {
    int matriz[4][4];
    int primos[16], noPrimos[16];
    int contPrimos = 0, contNoPrimos = 0;
    srand(time(0));
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 200 + 1;
        }
    }
    cout << "Matriz inicial" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }


    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(esPrimo(matriz[i][j])) {
                primos[contPrimos++] = matriz[i][j];
            } else {
                noPrimos[contNoPrimos++] = matriz[i][j];
            }
        }
    }

    int pos = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(pos < contNoPrimos) {
                matriz[i][j] = noPrimos[pos++];
            } else {
                matriz[i][j] = primos[pos - contNoPrimos];
                pos++;
            }
        }
    }
    cout << "Matriz ordenada" << endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(esPrimo(matriz[i][j])) {
                cout << "[" << matriz[i][j] <<]"\t";
            } else {
                cout << matriz[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
