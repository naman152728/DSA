#include <bits/stdc++.h>
using namespace std;
 
vector<int> LeftRotate(vector<int> &arr, int n, int k)
{

}

vector<int> RightRotate(vector<int> &arr, int n, int k)
{

}

int main()
{
    //Enter your Code...
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    LeftRotate(arr, n, k);

    RightRotate(arr, n, k);
 
    return 0;
}