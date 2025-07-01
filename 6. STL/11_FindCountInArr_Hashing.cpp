#include <bits/stdc++.h>
using namespace std;
 
#include <bits/stdc++.h>
using namespace std;

vector<int> hashing(vector<int> arr, int n)
{
    vector<int> hash(n, 0); // Initialize hash vector with zeros
    for(int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << i << " = " << hash[i] << endl;
    }
    
    return hash; // Return the hash vector
}

void unordered_map_count(vector<int> arr, int n)
{
    map<int, int> mpp;
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp)
    {
        cout << it.first << " = " << it.second << endl;
    }
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre Computing
    // vector<int> hash = hashing(arr, n);

    unordered_map_count(arr, n);

    return 0;
}
