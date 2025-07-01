#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Enter your Code...
    int arr[] = {12, 34, 5, 2, 56, 67, 89};
    int n = 7;

    // Ascending Order
    reverse(arr, arr + n);
    for (int it = 0; it < n; it++)
    {
        cout << arr[it] << " ";
    }
    cout << endl
         << endl;

    // Descending Order
    sort(arr, arr + n, greater<int>());
    for (int it = 0; it < n; it++)
    {
        cout << arr[it] << " ";
    }

    cout << endl
         << endl;

    vector<int> vec = {12, 34, 5, 2, 56, 67, 89};
    sort(vec.begin(), vec.end());
    for (auto it : vec)
    {
        cout << it << " ";
    }
    cout << *(max_element(vec.begin(), vec.end())) << endl;

    return 0;
}