#include <bits/stdc++.h>
using namespace std;
 
// Brute Force Approach ~ When arr is sorted
void brute(vector <int>& arr, int n)
{
    int ans = n * (n + 1) / 2;
    int sum = 0;
    for(int i : arr)
    {
        sum += i;
    }

    cout << ans - sum;
}

// Optimal Approach ~ When arr is not sorted ~ Using XOR
int optimal (vector <int>& arr, int n)
{
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        ans ^= arr[i];
    }

    for(int i = 1; i <= n; i++)
    {
        ans ^= i;
    }

    cout << ans;
}

int main()
{
    //Enter your Code...
    int n = 4;
    vector<int> arr = {1,2,3};

    // brute(arr, n);
    optimal(arr, n);

    return 0;
}