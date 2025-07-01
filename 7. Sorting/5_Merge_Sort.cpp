#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid+1;

    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        arr[st + k] = temp[k];
    }
}

void MergeSort(vector<int>& arr, int st, int end)
{
    if(st < end)
    {
        int mid = st + (end-st) / 2;

        MergeSort(arr, st, mid);

        MergeSort(arr, mid+1, end);

        merge(arr, st, mid, end);
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

    MergeSort(v, 0, n-1);

    for(auto it: v)
    {
        cout << it << " ";
    }

    return 0;
}