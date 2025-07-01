#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector <int> arr;
        for(int i = 0; i < n; i++)
        {
            cin >> i;
            arr.push_back(i);
        }

        sort(arr.begin(), arr.end(), greater<int>());
        int ans = (n-1) * x * arr[n-1];


    }
 
    return 0;
}