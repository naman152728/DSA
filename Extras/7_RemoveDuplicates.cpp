#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    int arr[] = {1, 1, 2, 3, 3, 4, 5, 5, 5};

    int i = 0;
    for(int j = 1; j < 9; j++)
    {
        if(arr[i] != arr[j])
        i++;
        arr[i] = arr[j];
    }
    cout << i+1;
 
    return 0;
}