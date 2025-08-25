#include <bits/stdc++.h>
using namespace std;

bool pow(int n)
{
    return n > 1 && !(n & (n-1));
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Elem to Check the 2's Power: ";
    cin >> n;

    cout << pow(n);
 
    return 0;
}