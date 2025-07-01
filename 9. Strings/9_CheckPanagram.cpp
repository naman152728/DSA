#include <bits/stdc++.h>
using namespace std;
 
bool checkPanagram(string str)
{
    if(str.size() < 26)
    return false;

    vector<int>pana(26, 0);

    for(int i = 0; i < str.size(); i++)
    {
        pana[tolower(str[i]) - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(pana[i] == 0)
        return false;
    }
    return true;
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    cout << checkPanagram(str);
 
    return 0;
}