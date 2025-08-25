#include <bits/stdc++.h>
using namespace std;

void LowToUp(string str, int i, int n)
{
    if (i <= n)
    {
        cout << (char)toupper(str[i]);
        return LowToUp(str, i + 1, n);
    }
    else
    return;
}

int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the String: ";
    cin >> str;

    LowToUp(str, 0, str.size() - 1);

    return 0;
}