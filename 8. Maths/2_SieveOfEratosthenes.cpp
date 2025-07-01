#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{

    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";

            for (int j = i * 2; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    checkPrime(n);

    return 0;
}