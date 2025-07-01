#include <bits/stdc++.h>
using namespace std;
 
void maxStr(vector<string> v, int n)
{
    vector<int> ans;
    for(auto i : v)
    {
        long long x = stoi (i);
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size()-1] << endl;
}

int main()
{
    //Enter your Code...
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<string> v(n);
    cout << "Enter the Values: ";
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    maxStr(v, n);
 
    return 0;
}