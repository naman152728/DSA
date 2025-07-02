#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int main()
{
    // Creation: vector <int> vec;
    vector <int> v1 = {1,2,3,4,5};
    cout << v1[2] << endl;
    for(int i:v1)
    {
        cout << i << endl;
    }

    vector <int> v2 (5, 2);
    cout << v2[3] << endl;
    cout << v2.size()<< endl;

    v1.push_back(12);
    v1.push_back(15);
    v1.push_back(22);
    v1.push_back(25);
    v1.push_back(32);
    v1.push_back(154);
    v1.push_back(121);
    v1.push_back(132);
    for(int j : v1)
    {
        cout << j << "\t";
    }

    v1.pop_back();
    for(int j : v1)
    {
        cout << j << "\t";
    }
    v1.pop_back();
    for(int j : v1)
    {
        cout << j << "\t";
    }

    cout << v1.front() << endl << v1.back() << endl;
 
    return 0;
}