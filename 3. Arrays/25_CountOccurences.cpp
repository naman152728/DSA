#include <bits/stdc++.h>
using namespace std;
 
void countOccurence(vector<int> arr, int n)
{
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++)
    {
        ans[arr[i]-1]++;
    }

    for(int i = 1; i < n+1; i++)
        cout << ans[i] << " ";

}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countOccurence(arr, n);
 
    return 0;
}