#include <bits/stdc++.h>
using namespace std;

void mergeS(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int l = st, r = mid+1, i = 0;

    while(l <= mid && r <= end){
        if(arr[l] <= arr[r])
            temp.push_back(arr[l++]);
        else
            temp.push_back(arr[r++]);
    }

    while(l <= mid)
        temp.push_back(arr[l++]);
    while(r<= end)
        temp.push_back(arr[r++]);
    
    for(int i = 0; i < temp.size(); i++)
    arr[st + i] = temp[i];
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st == end)
        return;

    int mid = st + (end - st) / 2;
    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);

    mergeS(arr, st, mid, end);
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    cout << "Enter the Elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    for(int i : arr)
    cout << i << " ";

    return 0;
}