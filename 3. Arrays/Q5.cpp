// waf to print all the unique elements in an array

#include <bits/stdc++.h>
using namespace std;

int UniqueVal(int arr[], int n)
{
    int ans[n], key = 0, a = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                key = 1;
            }
        }
        if(key == 0)
        {
            ans[a] = arr[i];
            a++;
        }

        for(int i = 0; i < a; i++)
        {
            cout << ans[i] << "\t";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter Element" << i+1 << ": ";
        cin >> arr[i];
    }

    UniqueVal(arr, n);
 
    return 0;
}