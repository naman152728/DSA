#include <bits/stdc++.h>
using namespace std;

int PBR(int arr[], int n)
{
    cout << "In Function" << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }

}

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    PBR(arr, n);

    cout << "In Main Function" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}