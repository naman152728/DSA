#include <bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> &arr, int i, int n, int key)
{
    if(i == n)
    return -1 ;

    if(arr[i] == key)
    return i;
    else
    return LinearSearch(arr, i+1, n, key);
}

int main() 
{
    //Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    cout << "Enter the Elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the Target: ";
    cin >> key;

    cout << LinearSearch(arr, 0, n, key);
 
    return 0;
}