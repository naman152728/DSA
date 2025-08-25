#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &arr)
{
    int n = arr.size();
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == 9)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = arr[i] +1;
            return arr;
        }
    }

    arr.insert(arr.begin(), 1);
    return arr;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the values: ";

    for (int i = 0; i < n; i++)
        cin >> v[i];

    plusOne(v);

    for(auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}