#include <iostream>

using namespace std;

int main()
{
    int arr[] = (1,2,3,4,5)

    //una forma de recorrido
    /**
    los punteros pueden incrementar y decrementar**/

    cout<<*(arr+0)<< endl;
    cout<<*(arr+1)<< endl;
    cout<<*(arr+2)<< endl;
    cout<<*(arr+3)<< endl;
    cout<<*(arr+4)<< endl;

    int *ptr3 = arr+4;
    for(int i=0; i<5; i++;ptr3--)
        cout<< *ptr3 << " ";

    return 0;
}
