#include <bits/stdc++.h>
using namespace std;

bool canPartition(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size(), total = arr[0];
    for (int i = 1; i < n; i++)
    {
        total += arr[i];
        arr[i] = total;
    }

    if (total % 2 == 1)
        return false;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (total / 2 == arr[i])
                return true;
        }
    }
    return false;
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

    cout << canPartition(arr);

    return 0;
}