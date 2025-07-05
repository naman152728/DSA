// // Brute Force Approach

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector <int> v1 = {1,2,3,4};
//     vector <int> v2;
//     int n = v1.size();
//     for(int i = 0; i < n; i++)
//     {
//         int prod = 1;
//         for(int j = 0; j < n; j++)
//         {
//             if(i != j)
//             {
//                 prod *= v1[j];
//             }
//         }
//         v2.push_back(prod);
//     }

//     for(int i : v2)
//     {
//         cout << i << " ";
//     }
 
//     return 0;
// }


// Optimized Approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v1 = {1,2,3,4};
    int n = v1.size();
    vector <int> prefix(n,1);
    vector <int> suffix(n,1);
    vector<int> ans(n,1);

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] * v1[i-1];
    }

    for(int j = n-2; j >= 0; j--)
    {
        suffix[j] = suffix[j+1] * v1[j+1];
    }

    for(int k = 0; k < n; k++)
    {
        ans[k] = prefix[k] * suffix[k];
    }

    for(int i : ans)
    {
        cout << i << " ";
    }
    
 
    return 0;
}