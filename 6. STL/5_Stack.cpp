#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    stack<int> s;
    s.push(12);
    s.push(34);
    s.push(2);
    s.push(676);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }


 
    return 0;
}