#include <bits/stdc++.h>
using namespace std;
 
void hashing(string s, int n)
{
    int hash[26] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        int ans = s[i] - 'a';
        hash[ans] += 1;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        cout << c << " = " << hash[c-'a'] << endl;
    }
}

void unordered(string s, int n)
{
    map <char, int> ch;
    for(int i = 0; i < n; i++)
    {
        ch[s[i]]++;
    }

    for(auto it: ch)
    {
        cout << it.first << " = " << it.second << endl;
    }
}

int main()
{
    //Enter your Code...
    string s;
    cin >> s;

    // hashing (s, s.size());

    unordered(s, s.size());
    
    return 0;
}