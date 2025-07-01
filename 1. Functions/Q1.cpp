// calculate the sum from 1 to n

#include <bits/stdc++.h>
using namespace std;

int sum (int n)
{
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += i;
    }

    cout << ans;
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    sum (n);
    
    return 0;
}