#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &a1, vector<int> &a2)
{
    vector<int> ans;
    for(int i = 0; i < a1.size(); i++)
    {
        int v;
        cin>> v;
        ans.push_back(v);
    }
    for(int i = 0; i < a2.size(); i++)
    {
        int v;
        cin>> v;
        ans.push_back(v);
    }

    sort(ans.begin(), ans.end());

    int n = ans.size();
    if(n % 2 != 0)
    cout << ans[n/2];
    else
    cout << (ans[(n/2)] + ans[(n/2)-1])/2;
}

int main()
{
    // Enter your Code...
    int n1, n2;
    cout << "Enter the size for a1: ";
    cin >> n1;

    cout << "Enter the size for a2: ";
    cin >> n2;

    vector<int> a1(n1), a2(n2);
    cout << "Enter the values for a1: ";
    for (int i = 0; i < n1; i++)
        cin >> a1[i];

    
    cout << "Enter the values for a2: ";
    for (int i = 0; i < n2; i++)
        cin >> a2[i];

    findMedianSortedArrays(a1, a2);

    return 0;
}