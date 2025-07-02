#include <bits/stdc++.h>
using namespace std;

// Brute Force Method: Using Extra Space
void BruteForce(vector<vector<int>> &arr, int x)
{
    vector<vector<int>> ans(x, vector<int>(x));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            ans[j][x - 1 - i] = arr[i][j];  // Rotate 90°
        }
    }

    cout << "Brute Force Rotation:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// Optimal Method: In-place Rotation using Transpose + Reverse
void Optimal(vector<vector<int>> &arr, int row)
{
    // Transpose
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < row; j++) // avoid duplicate swaps
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < row; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    cout << "Optimal Rotation:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter the size (rows/cols of square matrix): ";
    cin >> rows;

    // cols = rows for square matrix
    vector<vector<int>> arr(rows, vector<int>(rows));

    cout << "Provide the matrix input:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Uncomment to test either:
    // BruteForce(arr, rows);
    Optimal(arr, rows);

    return 0;
}
