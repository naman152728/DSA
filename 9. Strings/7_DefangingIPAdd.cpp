#include <bits/stdc++.h>
using namespace std;
 
void BruteForce (string str)
{
    string temp;
    for(int i = 0;i < str.size(); i++)
    {
        if(str[i] == '.')
            temp.append("[.]");
        else
        temp.push_back(str[i]);
    }

    cout << temp << endl;
}

void Optimized(string str)
{
    string temp;
    int idx = 0;

    while(idx < str.length())
    {
        if(str[idx] == '.')
        temp+= "[.]";
        else 
        temp+=str[idx];

        idx++;
    }

    cout << temp << endl;
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    // BruteForce(str);
    Optimized(str);
 
    return 0;
}