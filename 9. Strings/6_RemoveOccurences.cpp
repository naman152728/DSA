#include <bits/stdc++.h>
using namespace std;
 
void RemoveOccurences(string str, string part)
{
    
    while(str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    
    cout << str;
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    string part;
    cout << "Enter the Part: ";
    getline(cin, part);
    
    RemoveOccurences(str, part);
 
    return 0;
}