#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
vector<int> LeftRotate(vector<int>& arr, int n) 
{
    // Write your code here.
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
      arr[i - 1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }  
}

vector<int> RightRotate(vector<int> &arr, int n)
{
    int temp = arr[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    for(int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    } 
}

int main()
{
    //Enter your Code...
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftRotate(arr, n);

    RightRotate(arr, n);
 
    return 0;
}