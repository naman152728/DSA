#include <bits/stdc++.h>
using namespace std;
 
int RevRow1(int arr[][100], int x, int y)
{
    for(int i = 0;i < x; i++)
    {
        for (int j = y-1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int RevRow2(int arr[][100], int x, int y)
{
    for(int row = 0;row < x; row++)
    {
        int i = 0, j = y-1;
        while(i < j)
        {
            swap(arr[row][i], arr[row][j]);
            i++, j--;
        }
    }

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //Enter your Code...
    int rows, cols;
    cout << "Enter the Rows & Columns: ";
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
    
    // RevRow1(arr, rows, cols);
    RevRow2(arr, rows, cols);
    
    return 0;
}