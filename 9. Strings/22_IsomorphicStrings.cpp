#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> mapS(256, -1); // Map for characters in s
    vector<int> mapT(256, -1); // Map for characters in t

    for (int i = 0; i < s.size(); i++)
    {
        if (mapS[s[i]] == -1 && mapT[t[i]] == -1)
        {
            // Create a new mapping
            mapS[s[i]] = t[i];
            mapT[t[i]] = s[i];
        }
        else
        {
            // Check if the existing mapping is consistent
            if (mapS[s[i]] != t[i] || mapT[t[i]] != s[i])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    string s, t;
    cout << "Enter the First String: ";
    cin >> s;

    cout << "Enter the Second String: ";
    cin >> t;

    bool ans = isIsomorphic(s, t);
    cout << (ans ? "True" : "False") << endl;

    return 0;
}