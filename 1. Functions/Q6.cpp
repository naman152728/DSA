// waf to print all prime number from 1 to n

#include <bits/stdc++.h>
using namespace std;

int NPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool flag = true;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the value for n: ";
    cin >> n;

    cout << "The Prime Numbers from 1 to N are: " << endl;
    NPrime(n);

    return 0;
}
