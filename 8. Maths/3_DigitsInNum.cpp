#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    while (n != 0)
    {
        int r = n % 10;
        cout << r << " ";
        n /= 10;
    }
    cout << endl;
}

void countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int r = n % 10;
        count++;
        n /= 10;
    }
    cout << count << endl;
}

void sumDigits(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int r = n % 10;
        ans += r;
        n /= 10;
    }
    cout << ans << endl;
}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    printDigits(n);
    countDigits(n);
    sumDigits(n);

    return 0;
}