#include <bits/stdc++.h>
using namespace std;

string clockwise(string str)
{
    int i = 2;
    while (i > 0)
    {
        char c = str[str.size() - 1];
        ;
        int idx = str.size() - 2;
        while (idx >= 0)
        {
            str[idx + 1] = str[idx];
            idx--;
        }
        str[0] = c;
        i--;
    }

    return str;
}

string anticlockwise(string str)
{
    int i = 2;
    while (i > 0)
    {
        char c = str[0];
        int idx = 1;
        while (idx < str.size())
        {
            str[idx - 1] = str[idx];
            idx++;
        }
        str[str.size() - 1] = c;
        i--;
    }

    return str;
}

void isRotated(string s1, string s2)
{
    string clock = clockwise(s1);    // Call clockwise rotation
    string anti = anticlockwise(s1); // Call anticlockwise rotation

    if (clock == s2 || anti == s2)
        cout << true;
    else
        cout << false;
}

void Optimized(string s1, string s2) {
    // Clockwise rotation by 2
    string temp = s1; // Create a copy of the original string
    rotate(temp.begin(), temp.end() - 2, temp.end());
    if (temp == s2) {
        cout << true << endl;
        return;
    }

    // Anticlockwise rotation by 2
    temp = s1; // Reset to the original string
    rotate(temp.begin(), temp.begin() + 2, temp.end());
    if (temp == s2) {
        cout << true << endl;
    } else {
        cout << false << endl;
    }
}

int main()
{
    // Enter your Code...
    string str1;
    cout << "Enter the str1:";
    getline(cin, str1);

    string str2;
    cout << "Enter the str2: ";
    getline(cin, str2);

    // isRotated(str1, str2);
    Optimized(str1, str2);

    return 0;
}