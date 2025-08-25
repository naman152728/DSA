#include <bits/stdc++.h>
using namespace std;
 
int square(int num)
{
    if(num == 1)
    return num;

    return num * num + square(num-1);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Element: ";
    cin >> n;

    cout << square(n);
 
    return 0;
}