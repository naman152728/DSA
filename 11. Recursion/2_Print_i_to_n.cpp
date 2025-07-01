#include <bits/stdc++.h>
using namespace std;
 
int print(int i , int n)
{
    if(i < n)
    {
        cout << i << "\t";
    }
    else 
    {
        cout << i;
        exit(0);
    }

    print(i+1, n);
}

int main()
{
    //Enter your Code...
    int i, n;
    cout << "Enter the Values for i & n: ";
    cin >> i >> n;

    print (i,n);
 
    return 0;
}