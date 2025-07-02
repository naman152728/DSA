#include <bits/stdc++.h>
using namespace std;
 
int MaxCol(int arr[][100], int x, int y)
{
    int maxSum = INT_MIN;

    for(int i = 0; i < y; i++)
    {
        int currSum = 0;
        for(int j = 0; j < x; j++)
        {
            currSum += arr[j][i];
        }
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
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

    
    cout << MaxCol(arr, rows, cols);
    
 
    return 0;
}