#include <bits/stdc++.h>
using namespace std;
 
int pow(int num, int power)
{
    if(power == 1)
    return num;

    return num * pow(num, power-1);
}

int main()
{
    //Enter your Code...
    int n, p;
    cout << "Enter the num and the power of: ";
    cin >> n >> p;

    cout << pow(n, p);
 
    return 0;
}