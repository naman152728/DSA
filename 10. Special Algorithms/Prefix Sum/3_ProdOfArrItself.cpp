#include <bits/stdc++.h>
using namespace std;

vector<int> prod(vector<int> arr, int n)
{
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= arr[i];
    }

    for(int i =0; i < n; i++)
    {
        arr[i] = ans/arr[i];
    }

    return arr;
}

vector<int> optimized(vector<int> arr, int n){
    vector<int> ans(n,1), pre(n,1),suff(n,1);

    for(int i = 1; i< n; i++)
    {
        pre[i] = pre[i-1] * arr[i-1];
    }

    for(int i = n-2; i >= 0; i--)
    {
        suff[i] = suff[i+1] * arr[i+1];
    }

    for(int i = 0; i < n; i++)
    {
        ans[i] = pre[i] * suff[i];
    }
    return ans;
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

    // arr = prod(arr, n);
    arr = optimized(arr, n);
    for (int i : arr)
        cout << i << " ";

    return 0;
}