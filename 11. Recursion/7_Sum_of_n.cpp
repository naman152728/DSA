#include <bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n == 1)
    return 1;

    return n + Sum(n-1);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the n for Sum: ";
    cin >> n;

    int ans = Sum(n);
    cout << ans; 

    return 0;
}