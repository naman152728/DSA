// calculate the nCr binomial coefficient for n & r

#include <bits/stdc++.h>
using namespace std;

int nCr(int x)
{
    int ans = 1;
    for (int i = 2; i <= x; i++)
    {
        ans *= i;
    }

    return ans;
}

int main()
{
    int n, r;
    cout << "Enter the value for n: ";
    cin >> n;

    cout << "Enter the value for r: ";
    cin >> r;

    int ans = nCr(n) / (nCr(r) * nCr(n-r));
    cout << "The value for nCr is: ";
    cout << ans << endl;

    return 0;
}