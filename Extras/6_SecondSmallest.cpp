#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int ans = num[0], second = INT_MAX;
    for(int i =  1; i < n; i++)
    {
        if(ans > num[i])
        {
            second = ans;
            ans = num[i];
        }
        else if(second > num[i] && num[i] > ans)
        second = num[i];
    }
    cout << second;
 
    return 0;
}