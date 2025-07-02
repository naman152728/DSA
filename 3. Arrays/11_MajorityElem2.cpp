#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2,1,1,2,2};
    int count = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(count == 0)
        {
            ans = nums[i];
        }
        if(ans == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << ans;
    return 0;
}