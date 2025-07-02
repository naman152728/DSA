// Brute Force Solution

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> nums = {2,1,1,2,2};
//     int n = nums.size() / 2;
//     for(int i:nums)
//         {
//             int count = 0;
//             for(int j:nums)
//             {
//                 if(i == j)
//                 {
//                     count++;
//                 }
//             }
//             if(count > n)
//             {
//                 cout << i;
//             }
//         }
 
//     return 0;
// }

// Optimized SOl
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,1,1,2,2};
    int n = nums.size() / 2;
    sort(nums.begin(), nums.end());
    cout << nums[n];
 
    return 0;
}

