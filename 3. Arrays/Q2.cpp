// Find the index of the largest and smallest element from an array

#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int ans = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[ans])
        ans = i;
    }

    return ans;
}

int smallest (int arr[], int n)
{
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < arr[ans])
        ans = i;
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
 
    cout << "Largest Element at index: " << large << endl;
    
    cout << "Smallest Element at index: " << small << endl;

    return 0;
}