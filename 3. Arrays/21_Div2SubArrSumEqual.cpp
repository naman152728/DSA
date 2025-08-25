#include <bits/stdc++.h>
using namespace std;
 
bool sum(int arr[], int n)
{
    int totalsum = 0, prefix = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        totalsum+= arr[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        prefix += arr[i];

        if(totalsum == 2*prefix)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, n);

    return 0;
}