// Maximum Subarray Sol1

#include <bits/stdc++.h>
using namespace std;

int main()
{   int n = 6;
    int arr[n] = {12,23,34,45,56,67};

    for(int st = 0; st < n; st++)
    {
        for(int end = st; end < n; end++)
        {
            for(int i = st; i < end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
 
    return 0;
}