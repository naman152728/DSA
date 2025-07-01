#include <bits/stdc++.h>
using namespace std;

vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
{
    sort(nums.begin(), nums.end());
    int m = nums.size(), n = queries.size();

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int size = 0, sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += nums[j];
            if (sum <= queries[i])
                size++;
        }
        ans.push_back(size);
    }

    return ans;
}

vector<int> optimized(vector<int> &nums, vector<int> &queries)
{
    sort(nums.begin(), nums.end());
    int m = nums.size(), n = queries.size();
    vector<int>ans;
    for (int i = 1; i < m; i++)
    {
        nums[i] += nums[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        int size = 0;
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] > queries[i])
                high = mid - 1;
            else
            {
                size = mid + 1;
                low = mid+1;
            }
        }
        ans.push_back(size);
    }
    return ans;
}

int main()
{
    // Enter your Code...
    int n, m;
    cout << "Enter the Size for N:";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Size for M:";
    cin >> m;

    vector<int> nums(m);
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> nums[i];
    }

    // arr = answerQueries(arr, nums);
    arr = optimized(arr, nums);
    for (int i : arr)
        cout << i << " ";

    return 0;
}