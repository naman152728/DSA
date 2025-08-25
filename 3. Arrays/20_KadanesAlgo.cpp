#include <bits/stdc++.h>
using namespace std;
 
int SubArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            for(int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }

}

int main()
{
    // Enter your Code...
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    SubArr(arr, n);

    return 0;
}