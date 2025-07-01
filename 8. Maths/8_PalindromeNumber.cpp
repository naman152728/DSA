#include <bits/stdc++.h>
using namespace std;

int palindrome (int x)
{
    int ans = 0, temp = x;

    while(x != 0)
    {
        int r = x % 10;
        ans = (ans * 10) + r;
        x /= 10;
    }
    if(temp == ans)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Palindrome Number" << endl;
    }
}

int main()
{
    //Enter your Code...
    int x;
    cin >> x;

    palindrome(x);
 
    return 0;
}