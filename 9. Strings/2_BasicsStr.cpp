#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //Enter your Code...

    // String
    string str;
    str = "Hello World";
    cout << str << endl;

    // Combining the string i.e. Concatenation
    string str1 = "Naman";
    string str2 = "Sharma";
    string str3 = str1 + " " + str2;
    cout << str3 << endl;

    // Comparison
    cout << (str1 == str2) << endl;
    cout << (str1 > str2) << endl;
    cout << (str1 < str2) << endl;

    // String Length
    cout << str1.length() << endl;

    // Using Getline
    string str4;
    getline(cin, str4);
    cout << str4 << endl;
 
    return 0;
}