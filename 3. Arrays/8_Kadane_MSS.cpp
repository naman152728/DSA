// Maximum Subarray Sol1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6, maxSum = INT_MIN, currSum = 0;
    int arr[n] = {1,2,3-4,5};
    for (int st = 0; st < n; st++)
    {
        currSum += arr[st];
        if(currSum <= 0)
        {
            currSum = 0;
        }
    }

    cout << currSum;

    return 0;
}