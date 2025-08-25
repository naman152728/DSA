#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr, int i)
{
    if (i != arr.size())
    {
        arr[i+1] += arr[i];
        return sum(arr, i + 1);
    }

    return arr[arr.size()-1];
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    cout << "Enter the Elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << sum(arr, 0);

    return 0;
}