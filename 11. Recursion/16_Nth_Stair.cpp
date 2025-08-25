#include <bits/stdc++.h>
using namespace std;
 
int stair(int n)
{
    if(n < 4)
    return n;

    return stair(n-1) + stair(n-2);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Element till you want the Fibonacii Range: ";
    cin >> n;

    cout << stair(n);
 
    return 0;
}