// Reverse the vector using function

#include <bits/stdc++.h>
using namespace std;

int reverseV (vector <int> &vec)
{
    int start = 0, end = vec.size() - 1;
    while (start < end)
    {
        swap (vec[start], vec[end]);
        start++;
        end--;
    }

    for(int i: vec)
    {
        cout << i << "\t";
    }
}

int main()
{
    vector <int> v = {42, 17, 93, 58, 76, 24, 89, 12, 34, 67};
    reverseV(v);
    
 
    return 0;
}