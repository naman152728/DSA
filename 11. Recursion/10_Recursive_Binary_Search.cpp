#include <bits/stdc++.h>
using namespace std;

int BS(vector<int>& arr, int key, int st, int end) {
    if (st > end)
        return -1; // Not found

    int mid = st + (end - st) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return BS(arr, key, mid + 1, end);
    else
        return BS(arr, key, st, mid - 1);
}

int BinarySearch(vector<int>& arr, int n, int key) {
    return BS(arr, key, 0, arr.size() - 1);
}

int main()
{
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int key;
    cout << "Enter the Target: ";
    cin >> key;

    int ans = BinarySearch(v, n, key);
    cout << "Index: " << ans << endl;

    return 0;
}