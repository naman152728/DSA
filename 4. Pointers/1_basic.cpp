#include <bits/stdc++.h>
using namespace std;

int main()
{
    // INT to *PTR
    int a = 10;
    int* ptr1 = &a;

    // FLOAT to *PTR
    float i = 1.22;
    float* ptr2 = &i;

    cout << ptr1 << endl;
    cout << &a << endl;
    cout << ptr2 << endl; 
    
    // POINTER TO **POINTER
    int** parPtr1 = &ptr1;
    float** parPtr2 = &ptr2;

    cout << parPtr1 << endl;
    cout << parPtr2 << endl;

    // Dereference Pointer
    cout << *(&a) << endl;
    cout << *(&i) << endl;
    cout << *(ptr1) << endl;
    cout << *(ptr2) << endl;   
    cout << **(parPtr1) << endl;
    cout << **(parPtr2) << endl;

    // NULL POINTER
    int *nullPtr = NULL;
 
    return 0;
}