#include <bits/stdc++.h>
using namespace std;

vector<int> brute(vector<int> &arr, int k)
{
    // write code here
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i <= n - k; i++)
    {
        bool count = false;
        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] < 0)
            {
                ans.push_back(arr[i + j]);
                count = true;
                break;
            }
        }

        if (!count)
            ans.push_back(0);
    }
    return ans;
}

vector<int> optimized(vector<int> &arr, int k)
{
    vector<int> ans;
    int n = arr.size(), p = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            p = i;
            ans.push_back(arr[i]);
            break;
        }
    }

    if(p == -1)
    ans.push_back(0);

    int i =1, j = k;
    while(j < n)
    {
        if(i <= p)
        ans.push_back(arr[p]);
        else
        {
            p = -1;
            for(int a = i; a <= j; a++)
            {
                if(arr[a] < 0)
                {
                    p = a;
                    ans.push_back(arr[a]);
                    break;
                }
            }

            if(p == -1)
            ans.push_back(0);
        }
        i++,j++;
        
    }

    return ans;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cout << "Enter the K: ";
    cin >> k;

    // arr = brute(arr, k);
    arr = optimized(arr, k);
    for (int i : arr)
        cout << i << " ";

    return 0;
}