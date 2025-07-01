#include <bits/stdc++.h>
using namespace std;

void armstrongNumber(int n){
    int ans = 0, temp = n;
    while(n != 0)
    {
        int r = n % 10;
        ans += r*r*r;
        n /= 10;
    }
    if(ans == temp)
    {
        cout << "Armstrong Number";
    }
    else{
        cout << "Not an Armstrong Number";
    }
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    armstrongNumber(n);
 
    return 0;
}