#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    deque<int> de;
    de.push_front(12);
    de.push_front(23);
    de.push_back(34);
    de.push_back(44);
    de.push_front(56);
    de.push_front(67);
    de.push_back(78);
    de.push_back(89);
    for (auto it : de)
        cout << it << " ";
    cout << endl;

    de.pop_back();
    de.pop_front();
    for (auto it : de)
        cout << it << " ";
 
    return 0;
}