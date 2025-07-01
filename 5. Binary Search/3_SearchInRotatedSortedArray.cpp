#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3}, k = 0;
    int n = sizeof(arr) / sizeof(arr[0]); 
    int st = 0, end = n - 1;


    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (k == arr[mid])
        {
            cout << "Key is Found at Index: " << mid << endl;
            return 0;
        }

        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= k && k <= arr[mid])
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
            if (arr[mid] <= k && k <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << "Key is Not Found" << endl;

    return 0;
}