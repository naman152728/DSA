#include <bits/stdc++.h>
using namespace std;
 
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main()
{
    //Enter your Code...
    vector<int> num = {12,23,34,45,65,3, 54,456,76};
    sort(num.begin(), num.end());
    cout << num[0] << " " << num[num.size()-1];
    
    int result = gcd(num[0], num[num.size()-1]);
    cout << result;
    return 0;
}