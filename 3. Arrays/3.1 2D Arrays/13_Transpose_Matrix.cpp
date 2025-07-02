#include <bits/stdc++.h>
using namespace std;

void Transpose(vector<vector<int>> &arr, int x, int y)
{
    vector<vector<int>> ans(x,vector<int>(y));

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            ans[j][i] = arr[i][j];
            // swap(arr[i][j], arr[j][i]);
        }
        
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout <<  endl;
    }
}

int main()
{
    // Enter your Code...
    int rows, cols;
    cout << "Enter the Row & Columns: ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Provide the I/P: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    Transpose(arr, rows, cols);

    return 0;
}