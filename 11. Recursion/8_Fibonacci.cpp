#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
    return n;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the n for Fibonacci: ";
    cin >> n;

    int ans = Fibonacci(n);
    cout << ans;

    return 0;
}