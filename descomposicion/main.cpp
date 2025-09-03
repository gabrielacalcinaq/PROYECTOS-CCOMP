#include <iostream>

using namespace std;

int main()
{
    int num;//declarando numero
    cout << "Ingrese num de 4 digitos: ";
    cin >> num; //asignamos valor ingresado por teclado
    cout << "/n/nEl numero ingresado es: " <<num<< endl;
    //3254
    cout << num /1000 <<endl; // 3
    cout << (num%1000)/100<< endl; //2
    cout << (num%100)/10<< endl; // 5
    cout << num%10<< endl;
    return 0;
}
