#include <bits/stdc++.h>
using namespace std;
 
void BubbleSort(vector<int> arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] >= arr[j+1])
            swap(arr[j], arr[j+1]);
        }
    }

    for(auto it: arr)
    {
        cout << it << " ";
    }
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;
    
    vector<int> v(n,0);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    BubbleSort(v, n);
 
    return 0;
}