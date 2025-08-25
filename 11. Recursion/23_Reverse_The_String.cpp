#include <bits/stdc++.h>
using namespace std;
 
int rev (string str, int i){
    if(i == -1)
    exit(0);

    cout << str[i];
    return rev(str, i-1);
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << rev(str, str.size()-1);
 
    return 0;
}