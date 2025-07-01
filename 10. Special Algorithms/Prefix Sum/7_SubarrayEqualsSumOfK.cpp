#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &nums, int k) {
    int n = nums.size(), count = 0;
    for (int i = 0; i < n; i++) {
        int ans = 0;
        for (int j = i; j < n; j++) {
            ans += nums[j];
            if (ans == k) {
                count++;
            }
        }
    }
    return count;
}

int optimized(vector<int> &nums, int k) {
    int n = nums.size(), ans = 0, sum = 0;
    unordered_map<int, int> ump;
    ump[0] = 1;  // Initialize with 0 sum having frequency 1

    for(int i = 0; i < n; i++) {
        sum += nums[i];
        int rem = sum - k;
        ans += ump[rem];
        ump[sum]++;
    }   
    return ans;
}

int main() {
    int n;
    cout << "Enter the Size for N: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the Sum: ";
    cin >> k;

    // int ans = brute(arr, k);
    int ans = optimized(arr, k);
    cout << "Number of subarrays with sum " << k << ": " << ans << endl;

    return 0;
}