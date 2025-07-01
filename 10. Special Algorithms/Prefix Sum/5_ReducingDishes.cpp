#include <bits/stdc++.h>
using namespace std;

int maxSatisfaction(vector<int> &sat)
{
    int n = sat.size();
    sort(sat.begin(), sat.end());

    if(sat[n-1] < 0)
    return 0;

    int suff = sat[n-1], idx = 0;
    for(int i = n-2; i >= 0; i--)
    {
        suff += sat[i];
        if(suff > 0)
        {
            idx = i;
        }
    }

    int k = 1, ans = 0;
    for(int i = idx; i < n; i++)
    {
        ans += k * sat[i];
        k++;
    }

    return ans;
}

int greedy(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), greater<int> ());
    int n = arr.size();
    
    int pre = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        pre += arr[i];

        if(pre < 0)
        break;

        ans+= pre;
    }

    return ans;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxSatisfaction(arr);
    cout << greedy(arr);

    return 0;
}