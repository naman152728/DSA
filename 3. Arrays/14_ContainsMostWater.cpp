// Brute Force Approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1,8,9,2,5,4,8,3,7};
    int maxwater = 0, n = v1.size();

    for(int i = 0; i < n; i++)
    {
        int area = 0;
        for(int j = i+1; j < n; j++)
        {
            int height = j-i;
            int minwater = min(v1[i], v1[j]);
            area = height * minwater;
        }
        maxwater = max(area, maxwater);
    }

    cout << maxwater;

    return 0;
}

// Two Pointer Approach ~ Optimized Approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1,8,9,2,5,4,8,3,7};
    int maxwater = 0, i = 0, j = v1.size() - 1;
    while(i < j)
    {
        int ht = min(v1[i], v1[j]), width = j - i;
        int area = ht * width;
        maxwater = max (area, maxwater);

        v1[i] < v1[j] ? i++ : j--;  
    }

    cout << maxwater;
    return 0;
}