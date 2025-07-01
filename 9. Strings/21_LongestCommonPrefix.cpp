#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &arr)
{
    if(arr.size() ==1)
        return arr[0];
        
        sort(arr.begin(), arr.end());
        
        string ans = "", first = arr[0], last = arr[arr.size()-1];
        
        for(int i = 0; i < first.size(); i++)
        {
            if(first[i] == last[i])
                ans+= first[i];
            else
            break;
        }

    cout << ans;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<string> v(n);
    cout << "Enter the Values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    longestCommonPrefix(v);

    return 0;
}