#include <bits/stdc++.h>
using namespace std;

int func(int* x)
{
    *x = 45;
}

int main()
{
    int x = 10;
    cout << "Current Value of X: " << x << endl;
    func(&x);
    cout << "New Value of X: "<< x;
 
    return 0;
}