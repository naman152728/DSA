#include <bits/stdc++.h>
using namespace std;

bool Palindrome (string str)
{
    string temp = str;
    reverse(str.begin(), str.end());

    if(str == temp)
    return 1;

    return 0;
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
 
    cout << Palindrome(str);
    
    return 0;
}