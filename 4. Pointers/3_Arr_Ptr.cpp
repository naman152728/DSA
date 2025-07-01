#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12,23,34,45,56};
    cout << arr << endl;
    cout << *arr << endl;

    // Pointer Arithmetic
    int a = 10;
    int *ptr = &a;
    ptr++;
    cout << a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
 
    cout << *(arr+1) << endl;
    cout << *(arr+3) << endl;
    
    return 0;
}