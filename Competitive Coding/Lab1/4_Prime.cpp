// Write a program that takes 'a' an integer as input and display s True if 'a' isa rime and False otherwise.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter the num: ";
    cin >> a;
    bool isPrime = true;
    for(int i = 2; i <= a/2; i++)
    {
        if(a % i == 0)
        {
            isPrime = false;
        }
    }

    isPrime ? cout << a << " is Prime" : cout << a << " is not a Prime";
 
    return 0;
}
