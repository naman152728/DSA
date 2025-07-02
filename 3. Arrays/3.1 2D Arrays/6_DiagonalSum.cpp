#include <bits/stdc++.h>
using namespace std;
 
int DSum (int arr[][100], int x)
{
    int Lans = 0, Rans = 0;
    for(int i = 0; i < x; i++)
    {
        Lans+= arr[i][i];
        // Rans += arr[i][n-i-1];
    }

    int i = 0;
    for(int j = x-1; j >= 0; j--)
    {
        Rans += arr[i][j];
        i++;
    }

    int ans = Rans + Lans;

    if(x % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        x /= 2;
        cout << ans - arr[x][x] << endl;
    }
}

int main()
{
    //Enter your Code...
    int rows;
    cout << "Enter the Rows: ";
    cin >> rows;

    int arr[100][100];

    cout << "Provide the I/P: \n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    DSum(arr, rows);
    
    return 0;
}