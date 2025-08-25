#include <bits/stdc++.h>
using namespace std;

vector<int> bruteForce(vector<int> arr, int sum)
{
    sort(arr.begin(), arr.end());
    int low = arr[0], high = arr[arr.size() - 1];

    while (low <= high)
    {
        int ans = low + high;

        if (ans == sum)
        {
            cout << low << " " << high << endl;
            break;
        }
        else if (ans > sum)
            high--;
        else
            low++;
    }
    return {-1, -1};
}

vector<int> Optimized(vector<int> nums, int target)
{
    unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int ans = target - nums[i];
            if (m.count(ans)) {
                return {m[ans], i};
            }
            m[nums[i]] = i;
        }

        return {}; // No solution found
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

    int sum;
    cout << "Enter the Sum: ";
    cin >> sum;

    bruteForce(v, sum);

    return 0;
}