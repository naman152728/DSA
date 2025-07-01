#include <bits/stdc++.h>
using namespace std;

void wordCount(string str)
{
    stringstream ss(str);

    string temp;
    int count = 0;
    while(ss >> temp)
    {
        cout << temp << endl;
        count++;
    }

    cout << "count: " << count << endl;
}

int main() 
{
    //Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    
    wordCount(str);
 
    return 0;
}