#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t(n, '0');

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                t[i] = '1';
            }
            else
            {
                t[i] = '0';
            }
        }

        cout << t << endl;
    }

    return 0;
}