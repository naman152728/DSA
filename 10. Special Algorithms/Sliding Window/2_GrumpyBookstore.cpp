#include <bits/stdc++.h>
using namespace std;

int approach1(vector<int> &c, vector<int> &g, int min)
{
    int maxS = 0, n = c.size();
    for (int i = 0; i < min; i++)
        maxS += c[i];

    int prevS = maxS, idx = 1;
    for (int i = min; i < n; i++)
    {
        prevS += c[i] - c[i - min];

        if (maxS < prevS)
        {
            maxS = prevS;
            idx = i - min + 1;
        }
    }

    for (int i = idx; i < idx + min; i++)
        g[i] = 0;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (g[i] == 0)
            ans += c[i];
    }

    cout << ans;
}

int approach2(vector<int> &c, vector<int> &g, int min)
{
    int sat = 0, unsat = 0, n = c.size();
    for (int i = 0; i < n; i++)
    {
        if (g[i] == 0)
            sat += c[i];
    }

    for (int i = 0; i < min; i++)
    {
        if (g[i] == 1)
            unsat += c[i];
    }

    int maxS = unsat;
    for (int i = min; i < n; i++)
    {
        unsat += c[i] * g[i];
        unsat -= c[i - min] * g[i - min];

        maxS = max(maxS, unsat);
    }

    return maxS + sat;
}

int main()
{
    // Enter your Code...
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> c(n);
    cout << "Enter values for Customer: ";
    for (int i = 0; i < n; i++)
        cin >> c[i];

    vector<int> g(n);
    cout << "Enter values for Grumpy: ";
    for (int i = 0; i < n; i++)
        cin >> g[i];

    int min;
    cout << "Enter the Minutes: ";
    cin >> min;

    approach1(c, g, min);
    // cout << approach2(c, g, min);

    return 0;
}