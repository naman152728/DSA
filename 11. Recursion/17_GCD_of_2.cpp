#include <bits/stdc++.h>
using namespace std;
 
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
    
}

int main()
{
    //Enter your Code...
    int a, b;
    cout << "Enter the value for A & B: ";
    cin >> a >> b;

    cout << GCD(a,b);
 
    return 0;
}