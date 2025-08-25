#include <bits/stdc++.h>
using namespace std;
 
int MaxSum(int arr[], int n)
{
    int Max = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int prefix = 0;
        for(int j = i; j < n; j++)
        {
            prefix += arr[j];
            Max = max(prefix, Max);
        }
    }
    cout << Max;
}

int optimized(int arr[], int n)
{
    int maxSum = 0;

    for(int i = 0; i < n; i++)
    {
        maxSum += arr[i];
        if(maxSum < 0)
        maxSum = 0;
    }
    cout << maxSum;
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