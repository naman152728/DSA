#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Enter your Code...
    list<int> l;
    l.push_front(12);
    l.push_front(23);
    l.push_back(34);
    l.push_back(44);
    l.push_front(56);
    l.push_front(67);
    l.push_back(78);
    l.push_back(89);
    for (auto it : l)
        cout << it << " ";
    cout << endl;
    
    l.pop_back();
    l.pop_front();
    for (auto it : l)
        cout << it << " ";

    return 0;
}