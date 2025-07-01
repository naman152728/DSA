#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    pair <int, int> p1 = {12,23};
    cout << p1.first << endl;
    cout << p1.second << endl;

    pair<string, float> p2 ={"Naman", 23.3456};
    cout << p2.first << endl;
    cout << p2.second << endl;

    pair<int, pair<char, float>> p3 = {1234, {'@', 7890.456}};
    cout<< p3.first<<endl;
    cout << p3.second.first << endl;
    cout << p3.second.second << endl;

    vector<pair<int,int>> v;
    v.push_back({12,23});
    v.emplace_back(45,56);      // Directly makes the pair

    for(auto it : v)
    cout << it.first << " " << it.second << " ";

    return 0;
}