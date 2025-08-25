#include <bits/stdc++.h>
using namespace std;
 
int prefix(int arr[], int n)
{
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    for(auto i: prefixSum)
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

    prefix(arr, n);

    return 0;
}