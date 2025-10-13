#include <iostream>
using namespace std;

/*int main (){
    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    cout<<"Matriz: "<<endl;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
    }*/

int main() {
    int matriz[2][4]; // 2 filas, 4 columnas

    // Llenar la matriz con valores
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // Mostrar la matriz
    cout << "Matriz 2x4:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

