//  waf to check if number is prime or not

#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    int flag = 0;
    for(int i = 2; i <= n/2; i++)
    {
        if(n % i != 0)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << n << " is a Prime Number.";
    }
    else
    {
        cout << n << " is not a Prime Number.";
    }

}

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    prime(n);
 
    return 0;
}