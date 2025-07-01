#include <bits/stdc++.h>
using namespace std;
 
bool sorted(vector<int>& arr, int n)
{
    int ans = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(ans > arr[i])
        return 0;
    }

    return 1;
}

int main()
{
    //Enter your Code...
    vector <int> arr = {12,34,45,56,10};
    if(sorted(arr, arr.size()))
    cout << "Array is sorted";
    else
    cout << "Array is not sorted";
 
    return 0;
}