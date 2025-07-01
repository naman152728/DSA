// Write a program to find the factorial of a given number.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 1;
    cout << "Enter the num: ";
    cin >> n;

    if(n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for(int i = n; i > 1; i--)
        {
            ans *= i;
        }
    }
    cout << ans;    
 
    return 0;
}