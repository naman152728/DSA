#include <bits/stdc++.h>
using namespace std;

void WaveForm(vector<vector<int>> &arr, int x, int y)
{
    // x = arr.size(), y = arr[0].size();
    int top = 0, left = 0;
    int bottom = x - 1, right = y - 1;
    vector<int> ans;

    while(top <= bottom && left <= right)
    {
        for(int i = top; i <= bottom; i++)
            ans.push_back(arr[i][left]);

        left++;

        for(int i = bottom; i >= top; i--)
            ans.push_back(arr[i][left]);
        
        left++;
    }

    for(auto i: ans)
    {
        cout << i << " ";
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

    WaveForm(arr, rows, cols);

    return 0;
}