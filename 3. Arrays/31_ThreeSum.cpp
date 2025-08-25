#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> bruteForce(vector<int> &arr)
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> trip = {arr[i], arr[j], arr[k]};
                    sort(trip.begin(), trip.end());

                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> better(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> unique;

    for (int i = 0; i < n; i++)
    {
        int tar = -arr[i];
        set<int> s;
        for (int j = i + 1; j < n; j++)
        {
            int sum = tar - arr[j];

            if (s.find(sum) != s.end())
            {
                vector<int> trip = {arr[i], arr[j], sum};
                sort(trip.begin(), trip.end());
                unique.insert(trip);
            }
            s.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(unique.begin(), unique.end());
    return ans;
}

vector<vector<int>> Optimized(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++, k--;

                while (j < k && arr[j] == arr[j - 1])
                    j++;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the values: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // vector<vector<int>> result = bruteForce(v);
    // vector<vector<int>> result = better(v);
    vector<vector<int>> result = Optimized(v);

    cout << "Triplets with sum 0 are:" << endl;
    for (const auto &triplet : result)
    {
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}