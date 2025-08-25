#include <bits/stdc++.h>
using namespace std;
 
int MaxSum(int arr[], int n)
{
    int Max = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            Max = max(Max, arr[j]-arr[i]);
        }
    }
    cout << Max;
}

int optimized(int arr[], int n)
{
    int ans = -1, mini = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(mini <= arr[i])
            mini = arr[i];
        else
        ans = max(ans, arr[i] - mini);
    }
    cout << ans;
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

    // MaxSum(arr, n);
    optimized(arr, n);

    return 0;
}