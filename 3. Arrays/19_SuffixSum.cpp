#include <bits/stdc++.h>
using namespace std;
 
int suffix(int arr[], int n)
{
    vector<int> suffixSum(n);
    suffixSum[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        suffixSum[i] = suffixSum[i+1] + arr[i];
    }

    for(auto i: suffixSum)
    {
        cout << i << " ";
    }
    
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

    suffix(arr, n);

    return 0;
}