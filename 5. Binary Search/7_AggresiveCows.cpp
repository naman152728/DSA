#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    int arr[] = {10,1,2,7,5};
    int k = 3, n = 5;

    sort(arr, arr+n);
    int st = 1, end = arr[n-1] - arr[0], ans, mid;

    while(st <= end)
    {
        mid = st + (end - st) / 2;
        int pos = arr[0], count = 1;
        for(int i = 0; i < n; i++)
        {
            if(pos + mid <= arr[i])
            {
                count++;
                pos = arr[i];
            }
        }
        if(count < k)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            st = mid + 1;
        }
    }
    cout << ans;
    return 0;
}