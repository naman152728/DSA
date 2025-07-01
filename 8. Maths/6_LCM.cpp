#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y == 0) // Base case
        return x;
    return gcd(y, x % y); // Recursive call
}

void lcm (int x, int y)
{
    int GCD = gcd(x,y);
    cout << (x*y) / GCD;
}

int main()
{
    //Enter your Code...
    int x, y;
    cin >> x >> y;

    lcm(x,y);
 
    return 0;
}