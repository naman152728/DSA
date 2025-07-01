#include <bits/stdc++.h>
using namespace std;

vector<int> prefix(vector<int> arr, int n)
{
    vector<int> sum(n);
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }
    return sum;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = prefix(arr, n);
    for (int i : arr)
        cout << i << " ";

    return 0;
}