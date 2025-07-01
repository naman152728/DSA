
#include <bits/stdc++.h>
using namespace std;

// Brute force approach ~ Using Temp
void brute(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;
}

// Better Approach ~ Without Temp
void better(int a, int b)
{
    a = a + b;      // a = 12 + 41 = 53
    b = a - b;      // b = 53 - 41 = 41
    a = a - b;      // a = 53 - 12 = 12

    cout << a << " " << b;
}

// Optimal Approach ~ Using XOR
void optimal (int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b;
}

int main()
{
    //Enter your Code...
    int a  = 12;
    int b = 41;
    brute(a,b);
    better(a,b);
    optimal(a,b);
 
    return 0;
}