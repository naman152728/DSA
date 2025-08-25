#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int count = 1;
    vector<int> ans;
    ans.push_back(arr[0]);
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
        {
            count++;
            ans.push_back(arr[i]);
        }
    }

    arr = ans;
    for(auto i : arr)
    cout << i << " ";

    cout << endl << count;
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

    removeDuplicates(v);

    return 0;
}