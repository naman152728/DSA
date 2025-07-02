#include <bits/stdc++.h>
using namespace std;
 
void LinearSearch(int arr[][100], int x, int y, int key)
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

    int key;
    cout << "Enter the Key:";
    cin >> key;

    LinearSearch(arr, rows, cols, key);
    
 
    return 0;
}