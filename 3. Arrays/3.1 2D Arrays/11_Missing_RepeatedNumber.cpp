#include <bits/stdc++.h>
using namespace std;
 
void MissRepeat (vector<vector<int>> &arr, int x, int y)
{
    int n = arr.size();
    n *= n;
    vector <int> ans(n+1, 0);

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            ans[arr[i][j]]++;
        }
    }

    int missing = -1, repeated = -1;

    for(int i = 1; i < n+1; i++)
    {
        if(ans[i] == 2)
            repeated = i;

        if(ans[i] == 0)
            missing = i;
    }

    cout << "Missing: " << missing << endl;
    cout << "Repeated: " << repeated << endl;
}

int main()
{
    //Enter your Code...
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

    MissRepeat(arr, rows, cols);
 
    return 0;
}