#include <bits/stdc++.h>
using namespace std;

// Optimal Method: In-place Rotation using Transpose + Reverse
void Optimal(vector<vector<int>> &arr, int row)
{
    int t = 2;
    while (t)
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

        t--;
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

void AnotherApproach(vector<vector<int>> &arr, int row)
{
    int top = 0;
    int bottom = row - 1;

    while(top <= bottom )
    {
        for(int i = 0; i < row; i++)
            swap(arr[top][i], arr[bottom][i]);
        top++;
        bottom--;
    }

    for(int i = 0; i < row; i++)
        reverse(arr[i].begin(), arr[i].end());

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

    // Optimal(arr, rows);
    AnotherApproach(arr, rows);

    return 0;
}
