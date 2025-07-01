// calculate the sum of digits of a number

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits (int n)
{
    int ans = 0;
    while(n > 0)
    {        
        ans += n % 10;
        n /= 10;
    }

    cout << ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    sumOfDigits(n);

 
    return 0;
}