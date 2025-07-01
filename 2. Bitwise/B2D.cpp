//  Conversion of the  Binary to Decimal

#include <bits/stdc++.h>
using namespace std;

int B2D(int n)
{
    int ans = 0, r, pow = 1;
    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        ans += r * pow;
        pow *= 2;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cout << "Enter the Number to be converted into Decimal: ";
    cin >> n;

    B2D(n);
 
    return 0;
}