#include <bits/stdc++.h>
using namespace std;
 
void SelectionSort(vector<int> arr, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int smallest = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            smallest = j;
        }
        swap(arr[i], arr[smallest]);
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

    SelectionSort(v, n);
 
    return 0;
}