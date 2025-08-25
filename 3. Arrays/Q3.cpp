// WAF to calulate the sum and product of all numbers in an array

#include <bits/stdc++.h>
using namespace std;

int sum (int arr[], int n)
{
    int ans = 0;

    for(int i = 0; i < n; i++)
    {
        ans += arr[i];
    }

    cout << "The Sum of an Array is: " << ans << endl;
}

int prod(int arr[], int n)
{
   long int ans = 1;

    for(int i = 0; i < n; i++)
    {
        ans *= arr[i];
    }

    cout << "The Product of an Array is: " << ans << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter Element" << i+1 << ": ";
        cin >> arr[i];
    }

    sum(arr, n);
    prod(arr, n);
 
    return 0;
}