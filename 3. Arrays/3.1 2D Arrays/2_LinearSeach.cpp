#include <bits/stdc++.h>
using namespace std;
 
bool LinearSearch(int arr[][100], int x, int y, int key)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(arr[i][j] == key)
            return 1;
        }
    }
    return 0;
}

int main()
{
    //Enter your Code...
    int rows, cols;
    cout << "Enter the Row & Columns: ";
    cin >> rows >> cols;

    int arr[100][100];

    cout << "Provide the I/P: \n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter the Key:";
    cin >> key;

    bool ans = LinearSearch(arr, rows, cols, key);
    ans ? cout << "Found" : cout << "Not Found";
 
    return 0;
}