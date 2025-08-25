#include <bits/stdc++.h>
using namespace std;
 
bool pal(string str, int st, int end){
    if(st >= end)
    return 1;

    if(str[st] != str[end])
    return 0;

    return pal(str, st+1, end-1);
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << pal(str, 0, str.size()-1);
 
    return 0;
}