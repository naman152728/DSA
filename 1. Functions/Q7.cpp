// waf to print Nth fibonacci

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    int ans;
    if (n == 0)
    {
        cout << 0;
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else if (n >= 2)
    {
        int a = 0, b = 1, ans = 1;
        for(int i = 2; i <= n; i++)
        {
            ans = a + b;
            a = b;
            b = ans;
        }
        cout << ans << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    fibonacci(n);

    return 0;
}