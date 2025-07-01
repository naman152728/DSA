#include <bits/stdc++.h>
using namespace std;

void gcd(int x, int y){
    int n = min(x,y), ans = 0;

    for(int i = 1; i <= n; i++)
    {
        if(x % i == 0 && y % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << endl;
}

int Euclidean (int x, int y)
{
    if(x > y)
    {
        return Euclidean(x%y, y);
    }
    else{
        return Euclidean(x, y%x);
    }
}

int main()
{
    //Enter your Code...
    int x, y;
    cin >> x >> y;

    gcd(x,y);
    cout << Euclidean(x,y);
 
    return 0;
}