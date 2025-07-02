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

bool BetterApproach(vector<vector<int>>& arr, int x, int y, int key)
{
    int row, count = 0;
    for (int i = 0; i < x; i++)
    {
        if(arr[i][0] <= key && arr[i][y-1] >= key)
        row = i;
    }

    for(int i = 0; i < y; i++)
    {
        if(arr[row][i] == key)
        count = 1;
    }
    return count;
}

bool BinarySearch1(vector<vector<int>>& arr, int x, int y, int key)
{
    int m = arr.size(), n = arr[0].size();
    int st = 0, end = m-1;

    // Binary Search to Find the Correct Row
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
 
        if(arr[mid][0] <= key && arr[mid][n-1] >= key){
            st = mid;
            break; 
        }
        else if(arr[mid][0] > key)
            end = mid - 1;
        else
            st = mid+1;
    }
    
    int row = st;
    st = 0, end = arr[row].size()-1;

    // Binary Search to Find the Key in the Row
    while(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(arr[row][mid] == key)
            return true;
        else if(arr[row][mid] > key)
            end = mid - 1;
        else
            st = mid+1;
    }
    return false;
}

bool BinarySearch2(vector<vector<int>>& arr, int x, int y, int key)
{
    int rows = arr.size(), cols = arr[0].size();
    int st = 0, end = rows * cols -1;

    while(st <= end)
    {
        int mid = st + (end- st) / 2;

        int row = mid / 2;
        int col = mid % 2;
        int val = arr[row][col];

        if(val == key)
            return true;
        else if(val > key)
            end = mid-1;
        else
            st = mid + 1;
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

    // BetterApproach(arr, rows, cols, key);
    
    // BinarySearch1(arr, rows, cols, key);

    cout << BinarySearch2(arr, rows, cols, key);

    return 0;
}