#include <bits/stdc++.h>
using namespace std;
 
// Brute Force Approach
int brute(int n)
{
    if(n <= 1) return n;

    int a = 0, b = 1, c;
    for(int i = 2; i < n; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}

// Optimal Approach ~ Recursive Approach
int optimal(int n)
{
    if(n <= 1)
    return n;

    return optimal(n - 1) + optimal (n - 2);
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    // cout << brute(n) << endl;
    cout << optimal(n);
 
    return 0;
}