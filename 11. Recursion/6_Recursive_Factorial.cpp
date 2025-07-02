#include <bits/stdc++.h>
using namespace std;

int factorial (int n){
    if(n == 1 || n == 0)
    return 1;

    return n * factorial (n-1);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the n for Factorial: ";
    cin >> n;

    int ans = factorial(n);
    cout << ans; 

    return 0;
}