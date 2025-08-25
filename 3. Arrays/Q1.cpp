// Find the largest and smallest element from an array

#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int ans = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > ans)
        ans = arr[i];
    }

    return ans;
}

int smallest (int arr[], int n)
{
    int ans = arr[0];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < ans)
        ans = arr[i];
    }

    return ans;
}


int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;    

    int arr[n], large = INT_MIN, small = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    large = largest(arr, n);
    small = smallest(arr, n);
 
    cout << "Largest Element: " << large << endl;
    
    cout << "Smallest Element: " << small << endl;

    return 0;
}