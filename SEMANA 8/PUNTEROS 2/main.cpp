#include <iostream>

using namespace std;

int main()
{
    int* ptr1;
    int x =10;
    ptr1 = &x;

    cout<< *ptr1 << endl;

    *ptr1= 1000;
    cout << x << endl;

    int* ptr2 = &x;
    *ptr2 =5000;
    cout << x << endl;
    cout << *ptr1 <<endl;
    cout << *ptr2 <<endl;

    double* ptr3;
    double a = 9.2;
    ptr3 = &a;
    cout<< *ptr3 << endl;


    return 0;
}
