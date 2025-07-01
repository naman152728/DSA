#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    set<int> s;
    s.insert(12);
    s.insert(23);
    s.insert(54);
    s.insert(12);
    s.insert(10);

    for(auto it: s)
    {
        cout << it << " ";
    }

    return 0;
}