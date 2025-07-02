

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, ans = 1;
    int n;
    cin >> x >> n;

    if(n < 0)
    {
        x = 1/x;
        n = -n;
    }

    while(n > 0)
    {
        if(n % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    cout << ans;
 
    return 0;
}