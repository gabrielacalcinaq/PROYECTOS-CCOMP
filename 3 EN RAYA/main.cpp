#include <iostream>
using namespace std;

int main() {
    char c1 = '1', c2 = '2', c3 = '3';
    char c4 = '4', c5 = '5', c6 = '6';
    char c7 = '7', c8 = '8', c9 = '9';
    int turno = 0;
    int pos;
    char jugador;

    while (turno < 9) {
        // Mostrar tablero
        cout << "\n";
        cout << " " << c1 << " | " << c2 << " | " << c3 << "\n";
        cout << "---+---+---\n";
        cout << " " << c4 << " | " << c5 << " | " << c6 << "\n";
        cout << "---+---+---\n";
        cout << " " << c7 << " | " << c8 << " | " << c9 << "\n\n";

        // Determinar jugador
        if (turno % 2 == 0) jugador = 'X';
        else jugador = 'O';

        cout << "Turno del jugador " << jugador << ". Elige casilla (1-9): ";
        cin >> pos;

        // Marcar casilla
        if (pos == 1 && c1 == '1') c1 = jugador;
        else if (pos == 2 && c2 == '2') c2 = jugador;
        else if (pos == 3 && c3 == '3') c3 = jugador;
        else if (pos == 4 && c4 == '4') c4 = jugador;
        else if (pos == 5 && c5 == '5') c5 = jugador;
        else if (pos == 6 && c6 == '6') c6 = jugador;
        else if (pos == 7 && c7 == '7') c7 = jugador;
        else if (pos == 8 && c8 == '8') c8 = jugador;
        else if (pos == 9 && c9 == '9') c9 = jugador;
        else {
            cout << "Movimiento invalido. Intenta de nuevo.\n";
            continue; // no cuenta el turno
        }

        // Revisar si gana
        if ((c1 == jugador && c2 == jugador && c3 == jugador) ||
            (c4 == jugador && c5 == jugador && c6 == jugador) ||
            (c7 == jugador && c8 == jugador && c9 == jugador) ||
            (c1 == jugador && c4 == jugador && c7 == jugador) ||
            (c2 == jugador && c5 == jugador && c8 == jugador) ||
            (c3 == jugador && c6 == jugador && c9 == jugador) ||
            (c1 == jugador && c5 == jugador && c9 == jugador) ||
            (c3 == jugador && c5 == jugador && c7 == jugador)) {
            cout << "\nJugador " << jugador << " gana!\n";
            return 0;
        }

        turno++;
    }

    cout << "Empate!\n";
    return 0;
}
