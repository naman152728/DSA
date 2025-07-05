#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {7,6,4,3,1};
    int best_buy = v1[0], max_prof = 0;
    for(int i = 1; i < v1.size(); i++)
    {
        if(v1[i] > best_buy)
        {
            max_prof = max(max_prof, v1[i]-best_buy);
        }
        best_buy = min (best_buy, v1[i]);
    }
    cout << max_prof << endl;
 
    return 0;
}