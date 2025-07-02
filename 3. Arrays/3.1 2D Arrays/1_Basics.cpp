#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    int rows, cols;
    cout << "Enter the Row & Columns: ";
    cin >> rows >> cols;

    int arr [rows][cols];

    cout << "Provide the I/P: \n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Provide the O/P: \n";
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}