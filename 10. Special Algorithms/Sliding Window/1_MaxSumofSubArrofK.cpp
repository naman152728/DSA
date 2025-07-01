#include <bits/stdc++.h>
using namespace std;
 
int Brute(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), maxS = INT_MIN;
        for(int i = 0; i <= n-k; i++)
        {
            int ans = 0;
            for(int j = i; j < i+k; j++)
            {
                ans+= arr[j];
            }

            maxS = max(maxS, ans);
        }

        return maxS;
    }

int better(vector<int>& arr, int k) {
    int n = arr.size();
    if (k > n) return -1;  // Invalid case
    
    int maxSum = 0;  // Initialize maxSum to 0

    // Calculate sum of first window
    for(int i =0; i < k; i++)
        maxSum += arr[i];

    int prevSum = maxSum;
    // Slide the window
    for(int i = k; i < n; i++)
    {
        prevSum = prevSum + arr[i] - arr[i-k];

        maxSum = max(maxSum, prevSum);
    }
    

    return maxSum;
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Size for N: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    int k;
    cout << "Enter the K: ";
    cin >> k;

    // int ans = Brute(arr, k);
    int ans = better(arr, k);
    cout << ans;

    return 0;
}