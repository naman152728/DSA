#include <bits/stdc++.h>
using namespace std;
 
string isPrime(int n)
{    
    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        return "Non Prime";
    }
    return "Prime";
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    cout << isPrime(n);
 
    return 0;
}