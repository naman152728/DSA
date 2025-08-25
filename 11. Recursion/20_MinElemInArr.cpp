#include <bits/stdc++.h>
using namespace std;
 
int minElem(vector<int> &arr, int i){
    if(i != arr.size()){
        arr[0] = min(arr[0], arr[i+1]);
        return minElem(arr, i+1);
    }
    return arr[0];
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the Size: ";
    cin >> n;

    cout << "Enter the Elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << minElem(arr, 0);

    return 0;
}