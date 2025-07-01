// Binary Search using Recursion

#include <bits/stdc++.h>
using namespace std;

int Recursive(int arr[], int key, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (key > arr[mid])
        {
            return Recursive(arr, key, mid + 1, end);
        }
        else if (key < arr[mid])
        {
            return Recursive(arr, key, st, mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {-1, 0, 3, 5, 8, 10, 12, 13, 14, 17};
    int target = 5;

    int st = 0, end = 9;

    int result = Recursive(arr, target, st, end);
    if(result != -1)
    {
        cout << "Target is Found at Index: " << result;
    }
    else
    {
        cout << "Target not Found";
    }

    return 0;
}