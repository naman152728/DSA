#include <bits/stdc++.h>
using namespace std;

int LS(int arr[], int n, int key)
{
    int flag = 0;
    for(int i = 0; i < n; i ++)
    {
        if(key == arr[i])
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout << "Key is Found . . ." << endl;
    }
    else
    {
        cout << "Key is Not Found . . ." << endl;
    }
}

int main()
{
    int n, key;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;
    LS(arr, n, key);

    return 0;
}