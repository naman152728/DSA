#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    cin>>str;

    int x = stoi(str);
    cout << "Int: " << x << endl;

    int y = stoll(str);
    cout << "Long long: " << y;
 
    return 0;
}