#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int st = 1, end = n - 2;

    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid+1])
        {
            cout << mid;
            break;
        }
        else if(arr[mid - 1] < arr[mid])
        {
            st = mid+1;
        }
        else
        {
            end = mid - 1;
        }
    }
 
    return 0;
}

