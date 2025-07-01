#include <bits/stdc++.h>
using namespace std;
 
void reverse(int x)
{
    while(x != 0)
    {
        int r = x % 10;
        cout << r;
        x/= 10;
    }
}

int main()
{
    //Enter your Code...
    int x;
    cin >> x;

    reverse(x);
 
    return 0;
}