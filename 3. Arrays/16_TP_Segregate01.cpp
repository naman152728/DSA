#include <bits/stdc++.h>
using namespace std;

int betterApproach(int arr[], int n)
{
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else
            one++;
    }

    for (int i = 0; i < n; i++)
    {
        if (zero > 0)
        {
            arr[i] = 0;
            zero--;
        }
        else if (one > 0)
        {
            arr[i] = 1;
            one--;
        }
    }
}

int optimized(int arr[], int n)
{
    int i = 0, j = n - 1;

    while (i < j) // Use i < j to avoid unnecessary comparisons
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]); // Correct syntax for swap
            i++;
            j--;
        }
        else if (arr[i] == 0)
        {
            i++; // Move the left pointer forward if it's already 0
        }
        else if (arr[j] == 1)
        {
            j--; // Move the right pointer backward if it's already 1
        }
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

    // betterApproach(arr, n);
    optimized(arr, n);

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}