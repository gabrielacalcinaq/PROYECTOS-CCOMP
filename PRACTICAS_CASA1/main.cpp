#include <iostream>

using namespace std;

int main()
{  /**numero par o impar
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;

    if (n%2==0){
            cout<<"par";
    }
    else {
        cout<<"impar";
    }*/
    /**pide un num e imprine cual
    es mayor o si son iguales
    int n,z;
    cout<<"Ingresa dos num: ";
    cin>>n>>z;

    if (n<z){
        cout<<n<<" es menor que "<<z;
    }
    else if (z<n){
        cout<<z<<" es menor que "<<n;
    }
    else{
        cout<<n<<" y "<<z<<" son iguales";
    }

    int n,a;
    cout<<"ingresa un num: ";
    cin>>n;
    a=1;
    while(a<=n){
        cout<<a<<endl;
        a+=1;
    }*/

    /**pedir numeros y sumarlos hasta q
    pongan un num negativo
    int n,sum=0;
    cout<<"Ingresa un numero: "<<endl;
    cin>>n;

    while(true){
            sum+=n;
            cin>>n;
            if (n<0)break;
    }
    cout<<sum;*/

    /**genera un num y haz al usuario
    adiviniar hasta q achunte

    int a,num=5;
    cout<<"Adivina el numero"<<endl;
    cin>>a;

    while(a!=num){
        cout<<"Intenta de nuevo"<<endl;
        cin>>a;
        if (a==num)break;
    }
    cout<<"Muy bien, el numero era "<<num;*/

    /**pide un numero n y muestra su tabla de mult del
    1 al 10
    int a;
    cout<<"ingresa un num";
    cin>>a;

    for (int i=1; i<=10; i++){
        cout<<a*i<<endl;
    }*/


    int opcion;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Tabla de multiplicar\n";
        cout << "2. Factorial\n";
        cout << "3. Salir\n";
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int n;
            cout << "Ingrese un numero: ";
            cin >> n;
            for (int i = 1; i <= 10; i++)
                cout << n << " x " << i << " = " << n * i << endl;
        }
        else if (opcion == 2) {
            int n;
            long long fact = 1;
            cout << "Ingrese un numero: ";
            cin >> n;
            for (int i = 1; i <= n; i++)
                fact *= i;
            cout << "El factorial es: " << fact << endl;
        }
        else if (opcion == 3) {
            cout << "Saliendo...\n";
        }
        else {
            cout << "Opcion no valida\n";
        }

    } while (opcion != 3);

    return 0;
}


