#include <bits/stdc++.h>
using namespace std;
 
void LinearSearch(vector<vector<int>>& arr, int x, int y, int key)
{
    pair<int, int> p = {-1,-1};
    int count = 0;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(arr[i][j] == key)
            {
                p.first = i;
                p.second = j;
                count = 1;
            }
            
        }
    }
    if(count = 1)
    {
        cout << "Element is Found at : R" << p.first << " C" << p.second; 
    }
    else
    {
        cout << "Element is Not Found : R" << p.first << " C" << p.second; 
    }
}   

bool BinarySearch(vector<vector<int>>& arr, int x, int y, int key)
{
    int m = arr.size(), n = arr[0].size();
    int row = 0, col = m-1;

    // Binary Search to Find the Correct Row
    while (row < m && col >= 0)
    { 
        if(arr[row][col] == key)
            return true;
        else if(arr[row][col] > key)
            col--;
        else
            row++;
    }
    
    return false;
}

int main()
{
    //Enter your Code...
    int rows, cols;
    cout << "Enter the Row & Columns: ";
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

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

    // LinearSearch(arr, rows, cols, key);
    
    cout << BinarySearch(arr, rows, cols, key);

    return 0;
}