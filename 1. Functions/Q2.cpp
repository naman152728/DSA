// calculate n factorial

#include <bits/stdc++.h>
using namespace std;

int factorial (int n)
{
    int ans = 1;
    for(int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    cout << ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    factorial(n);
 
    return 0;
}