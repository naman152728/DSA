#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    string ans = "";
    reverse(str.begin(), str.end());
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        string word;
        while (i < n && str[i] != ' ')
        {
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
            ans += " " + word;
    }

    return ans.substr(1);
}

int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    cout << reverseWords(str);

    return 0;
}