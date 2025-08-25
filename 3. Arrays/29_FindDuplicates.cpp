#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> &arr)
{
    unordered_set<int> ump;
    for(auto i : arr)
    {
        if(ump.find(i) != ump.end())
        return i;

        ump.insert(i);
    }
    return 0;
}

int Optimized(vector<int> &arr)
{
    // Using Slow_Fast Approach
    int slow = arr[0], fast = arr[0];
    
    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    
    return slow;
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

    // cout << bruteForce(v);
    cout << Optimized(v);

    return 0;
}