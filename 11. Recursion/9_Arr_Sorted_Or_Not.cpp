#include <bits/stdc++.h>
using namespace std;
 
bool isSorted(vector<int> arr, int n)
{
    if(n == 0 || n == 1)
    return true;

    if(arr[n-1] < arr[n-2])
    {
        return false;
    }

    return isSorted(arr, n-1);
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the Elements: "<< endl;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool ans = isSorted(v, n);
    cout << ans;

    return 0;
}