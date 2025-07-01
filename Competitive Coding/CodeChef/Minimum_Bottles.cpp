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

        vector<int> ans[n];
        int sum = 0;
        for(int i : arr)
        {
            sum += i;
        }
        int count = 1;
        for(int i : arr)
        {
            if(sum > i)
            {
                count++;
                sum -= i;
            }
        }
        cout << count << endl;
    }
 
    return 0;
}