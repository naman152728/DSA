#include <bits/stdc++.h>
using namespace std;
 
void print(vector<int> &arr, int i){
    if(i < arr.size()){
    cout << arr[i];
    }
    return print(arr, i+1);
}

int main()
{
    //Enter your Code...
    int n;
    cout <<"Enter the Size: ";
    cin >> n;

    cout << "Enter the Elements: ";
    vector<int> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    print(arr, 0);
 
    return 0;
}