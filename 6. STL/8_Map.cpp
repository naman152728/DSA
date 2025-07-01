#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    map<string, int> m;
    m["Tv"] = 100;
    m["Laptop"] = 140;
    m["PCs"] = 110;

    for(auto it: m)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << endl;
    m.insert({"XBox", 99});
    m.insert({"PS5", 90});
    m.insert({"Mobile", 190});
    for(auto it: m)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << "Count: " << m.count("Tv") << endl;
    m.erase("Laptop");
    for(auto it: m)
    {
        cout << it.first << " " << it.second << endl;
    }

    if(m.find("Mobile") != m.end())
    cout << "Found" << endl;
    else
    cout << "Not Found" << endl;


    // MultiMap 
    multimap<string, int> mm;
    mm.insert({"Tv", 100});
    mm.insert({"Tv", 100});
    mm.insert({"Tv", 100});
    mm.insert({"Tv", 100});

    for(auto it: mm)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl << endl;
    // Unordered Map
    unordered_map<string, int> um;
    um.insert({"XBox", 99});
    um.insert({"PS5", 90});
    um.insert({"Mobile", 190});
    um["Tv"] = 100;
    um["Laptop"] = 140;
    um["PCs"] = 110;

    for(auto it: um)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}