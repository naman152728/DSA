#include <bits/stdc++.h>
using namespace std;

int romtoInt(string str)
{
    unordered_map<char, int> ump{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int ans = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (ump[str[i]] < ump[str[i + 1]])
            ans -= ump[str[i]];
        else
            ans += ump[str[i]];
    }

    cout << ans;
}

int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    romtoInt(str);

    return 0;
}