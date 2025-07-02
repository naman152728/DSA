// Maximum Subarray Sol1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6, maxSum = INT_MIN;
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << maxSum;

    return 0;
}