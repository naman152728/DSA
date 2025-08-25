#include <bits/stdc++.h>
using namespace std;
 
int pow(int num)
{
    if(num == 1)
    return 2;

    return 2 * pow(num-1);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Elem to get the 2's Power: ";
    cin >> n;

    cout << pow(n);
 
    return 0;
}