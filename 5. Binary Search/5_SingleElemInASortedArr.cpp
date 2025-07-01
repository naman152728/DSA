#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] =  {1,1,2,3,3,4,4,8,8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int st = 0, end = n - 1;

    if(n == 1) cout << arr[0];

    while(st <= end)
    {
        int mid = st + (end - st) / 2;
        if(mid == 0 && arr[0] != arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

        if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
        {
            cout << arr[mid];
        }

        if(mid % 2 == 0)
        {
            if(arr[mid - 1] == arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if(arr[mid] == arr[mid + 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
    }

    return 0;
}