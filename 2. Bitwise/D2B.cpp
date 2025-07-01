// Conversion of Decimal to Binary

#include <bits/stdc++.h>
using namespace std;

int D2B(int n)
{
    int ans = 0, r, pow = 1;
    while(n != 0)
    {
        r = n % 2;
        n /= 2;
        ans += r * pow;
        pow *= 10;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout << "Enter the Number to be converted into Binary: ";
    cin >> n;

    D2B(n);
 
    return 0;
}

