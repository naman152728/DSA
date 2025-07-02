// Brute Force Solution
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector <int> v1 = {2,7,11,15};
//     int sum = 9;

//     for(int i:v1)
//     {
//         for(int j: v1)
//         {
//             int ans = i+j;
//             if(sum == ans)
//             {
//                 cout << "Pair is: " << i << ", " << j;
//                 return 0;
//             }
//         }
//     }  
// }

// // Optimized Solution 
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector <int> v1 = {2,7,11,15};
//     vector<int> sol;
//     int sum = 26, i = 0, j = v1.size()-1;

//     while(i < j)
//     {
//         int ans = v1[i] + v1[j];
//         if(ans < sum)
//         {
//             i++;
//         }
//         else if(ans > sum)
//         {
//             j--;
//         }
//         else
//         {
//             sol.push_back(i);
//             sol.push_back(j);
//             break;
//         }

//     }

//     cout << sol[0] << ", " << sol[1];
 
//     return 0;
// }

// Most Optimized using O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector <int> v1 = {2,7,11,15};
    int sum = 9;
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i = 0; i < v1.size(); i++)
    {
        int first = v1[i];
        int second = sum - first;

        if(m.find(second) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }

    cout << ans[0] << ", " << ans[1];
    
    return 0;
}
