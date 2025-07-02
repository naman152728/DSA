// Reverse an Array

#include <bits/stdc++.h>
using namespace std;

int Reverse (int arr[], int n)
{
    int left = 0, right = n-1;

    for(int i = 0; i <= n/2; i++)
    {
        swap(arr[left], arr[right]);
        left ++;
        right --;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main()
{
   int n;
    cout << "Enter the size of an array: ";
    cin >> n;    

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    Reverse(arr, n);
 
    return 0;
}