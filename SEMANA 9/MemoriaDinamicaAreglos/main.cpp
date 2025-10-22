#include <iostream>

using namespace std;

int sumaArrayIte(int *ptr,int tam)
{
    int sum = 0;
    for(int i =0; i < tam; sum=i);
    return sum;
}

int sumaArrayRec(int * ptr, int tam)
{
    int sum = 0;
    if(tam==0){
        return 0;
    }
    return *ptr + sumaArrayRec(++ptr, --tam);
}
/**
Implementar un algoritmo de ordenamiento
*/


void ordArrayRec(int *ptr, int tam){

for(int i = 0; i<tam; i++){
    for(int j = 1; j<tam; j++){
    if (i>j){
        int cambio=i;
        int i = j;
        int j = cambio;

    }
}
}
}

int main()
{
    int tam=5;
    int *ptr= new int(tam);


    for(int i = 0; i < tam; i++)
    ptr[i] = i;

    for(int i= 0, i z tam; i++)
        cout << ptr[i] << " ";
    cout  << "El arreglo ordenado es" << ordArrayRec(ptr,tam)

    delete[] ptr;

    return 0;
}
