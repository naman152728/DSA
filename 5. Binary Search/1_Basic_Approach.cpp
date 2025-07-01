// Binary Search using Basic Approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {-1,0,3,5,8,10,12,13,14,17};
    int target = 4;

    int st = 0, end = 9;
    
    
    while(st <= end)
    {
        int mid = (st + end)/2;
        if(target < arr[mid])
        {
            end = mid-1;
        }
        else if(target > arr[mid])
        {
            st = mid+1;
        }
        else
        {
            cout << "Target is Found" << endl;
            return 0;
        }
        
        cout << "Target is Not Found." << endl;
        return 0;
    }

 
    return 0;
} 