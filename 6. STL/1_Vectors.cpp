#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    vector<int> vec;
    vec.push_back(12);
    vec.push_back(22);
    vec.push_back(32);
    vec.push_back(45);
    vec.push_back(56);
    vec.push_back(67);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    cout << vec.at(1) << endl;

    cout << *(vec.begin()) << endl;
    cout << *(vec.end()-1) << endl;
    cout << *(vec.rend()-1) << endl;

    for(auto it = vec.begin(); it < vec.end(); it++)
    {
        cout << *it<< " ";
    }
    cout << endl;
    for(auto it = vec.rbegin(); it < vec.rend(); it++)
    {
        cout << *it<< " ";
    }
    cout << endl;
    for(auto it:vec)
    {
        cout << it << " ";
    }
 
    return 0;
}