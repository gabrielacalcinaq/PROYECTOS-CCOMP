#include <iostream>
using namespace std;
//Declara un entero, un puntero a entero,
//asigna la dirección del entero al puntero
//y modifica el valor del entero a través del
//puntero.

/*int main(){
    int* ptr;
    int num;
    num = 10 ;
    ptr = &num ;
    cout << "Valor original de num: " << num << endl;
    cout << "Direccion: " << &num << endl;
    cout << "Valor de ptr: " << ptr << endl;
    cout << "Valor al q apunta ptr: " << *ptr << endl;

    *ptr = 13;
    cout << "nuevo valor de num: "<< num << endl;
    cout << "Nuevo valor al que apunta ptr: " << *ptr << endl;
    return 0;
    }**/

    //----------------------------


//Crea una función que intercambie los valores de dos
// variables enteras utilizando punteros.

/*void intercambiar( int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y =10;
    cout << "antes del intercambio: x = " << x << " y y = "<<endl;
     intercambiar(&x,&y);

     cout << "Despues x y y valen: "<< x << " y " << y << endl;

}*/

    //-----------------------------------


//Usa un puntero para recorrer un arreglo y sumar
//sus elementos.

/*int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int suma = 0;
    int *ptr = arr;

    for (int i=0; i<n ; i++) {
        suma += *ptr
        ptr++
    }

}*/


    //------------------------------------------


//Crea un arreglo dinámico de enteros, pide al
//usuario que ingrese los valores, luego muéstralos
//y libera la memoria.

/*int main()
{
    int n;
    cout << "ingrese el tamaño del arreglo"<< endl;
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cout<<"Ingrese el valor para " << i << ": "<<endl;
        cin >> arr[i];
        }
    for(int i=0; i<n; i++) {
        cout<< arr[i] << endl;
    }
    cout<< endl;
    delete[] arr;
return 0;*/

    //----------------------------


//Usa un puntero para encontrar el valor máximo en
//un arreglo
/*int main()
{
    int arr[] = {2,5,1,2,6,4,2,1}
    int n = sizeof(arr)/sizeof(arr[0])
    int *ptr=arr;
    int maximo = *ptr

    for (int i=1; i<n; i++){
        ptr++;
        if(*ptr > maximo){
            maximo = *ptr;
        }
    }
    cout << "el maximo es : " << maximo << endl;
    return 0;
}*/

    //-------------------------------------


//Copia los elementos de un arreglo a otro
//usando punteros.

/**int main() {
    int arr1[]={1,2,3,4}
    int n=sizeof(arr)/sizeof(arr[0])
    int arr2[];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for(int i=0; i<n; i++){
        *ptr2 = *ptr1
        ptr2++;
        ptr1++;
    }
    for (inr i=0; i<n; i++){
        cout << arr2[i] << endl;
    }
    cout << endl;
    return 0;
}*/


    //------------------------------------


// Invierte el orden de los elementos de un
//arreglo utilizando punteros

/*int main()
{
    int arr[]={1,2,3,4,5};
    int *inicio = arr;
    int *fin = arr + n - 1;

    cout << "Arreglo original: ";
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    whilr(inicio < fin){
        int temp = *inicio;
        *inicio = *fin;
        *fin = *inicio;
        inicio ++;
        fin ++;
    }
    cout << "Arreglo invertido: ";
    for (i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}*/





