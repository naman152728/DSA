#include <bits/stdc++.h>
using namespace std;

int betterApproach(int arr[], int n, int key)
{
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = n-2; j >= 0; j--)
        {
            int diff = arr[i] - arr[j];
            if (diff == key)
            {
                cout << arr[i] << " " << arr[j];
                return 0;
            }
        }
    }
}

int optimized(int arr[], int n, int key)
{
    int i = 0, j = n-1;
    while(i < j)
    {
        int diff = arr[j] - arr[i];
        if(diff == key)
        {
            cout << arr[i] << " " << arr[j];
            return 0;
        }
        else if(diff > key )
            j--;
        else if(diff < key)
            i++;
    }

}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    // betterApproach(arr, n, key);
    optimized(arr, n, key);

    // for (auto i : arr)
    // {
    //     cout << i << " ";
    // }

    return 0;
}