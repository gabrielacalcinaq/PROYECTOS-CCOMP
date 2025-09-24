#include <iostream>

using namespace std;

int main()
{
    /**Implementa una funcion que reciba im arreglo de enteros y su tamaño y retorne la suma de los elementos del arreglo*//
    long sumar(int arr[],int tam) {
    int sum=0;
    for(int i=0; i<tam; sum+=arr[]);
    return sum;
    }
    long sumarR(int arr[],int tam){
    if(tam=0){
        return arr[0];}
    else{
        return arr[tam-1]+sumar(arr,tam-1)
    }
    }
    int main()
    int arr[5];

    /**Implementa una funcion para invertir los elementos de un arreglo==PREGUNTA VIERNES*/
    void invertir(int arr[],int tam){
        for(int i==0;j=tam-1;i++){
            int tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
}
    void invertirR(int arr();int tam;int i=0);
        if(i>tam){
            return;
        }
        else

    void print(int arr[]; int tam){
        cout<<"[";
        for(int i=0; i<tam; i++)
            cout <<arrr[i]<<" ";
        cout<<"]";
    }

    int main()
    {
        inr arr[]=(10,20,30,40,50);
        print(arr,5);
        invertir(arr,5);

        return 0;
    }

    /**Implementa una funcion para invertir los elementos de un arreglo USANDO INTERCAMBIO DE VALORES*/
    //===FUNCION DE INTERCAMBIO ===
    void intercambio(int &a, int&b){
        int temp=a;
        a=b;
        b=temp
        }
    int main()
    {
        int x=10;
        int y=20;

        intercambio(x,y);

        cout<< x <<endl;
        cout<< y<<endl;

    return 0;
}
    //================

    #include <iostream>

    usin namespace std;
    int main()
    {
        int arr[]=(10,20,30,40,50);
        char cad1[]={'c','i','e','n','c','i','a'}
        char cad2[]="ciencia";

        cout << arr <<endl;
        cout <<cad1<<endl;
        cout<<cad2<<endl;

        cout <<longitud(cad1)<<endl;
        return 0;

    }
