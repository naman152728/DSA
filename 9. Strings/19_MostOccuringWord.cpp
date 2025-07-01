#include <bits/stdc++.h>
using namespace std;

void word(string str)
{
    stringstream ss(str);

    string temp;
    vector<string> v;

    while(ss >> temp)
    {
        v.push_back(temp);   
    }

    sort(v.begin(), v.end());

    int maxC = -1;
    string ans;
    for (int i = 1; i < v.size(); i++)
    {
        int count = 1;
        if(v[i] == v[i-1])
        count++, ans = v[i];

        maxC = max(count, maxC);
    }
    cout << maxC << endl << ans;
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    
    word(str);
 
    return 0;
}
