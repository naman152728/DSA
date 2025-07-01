#include <bits/stdc++.h>
using namespace std;

void DNFAlgo(vector<int> arr, int n)
{
    int low = 0, mid = 0, high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(auto it: arr)
    {
        cout << it << " ";
    }
}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    DNFAlgo(v, n);

    return 0;
}