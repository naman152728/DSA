#include <bits/stdc++.h>
using namespace std;

int brute(string c)
{
    int n = c.length();
    int minP = INT_MAX, hour = 0;

    for (int j = 0; j <= n; j++)
    {
        int pen = 0;

        // Shop Open [0 : j-1]
        for (int i = 0; i < j; i++)
        {
            if (c[i] == 'N')
                pen++;
        }

        // Shop Closed [j : n-1]
        for (int i = j; i < n; i++)
        {
            if (c[i] == 'Y')
                pen++;
        }

        if (pen < minP)
        {
            minP = pen;
            hour = j;
        }
    }
    return hour;
}

int better(string c)
{
    int n = c.size();
    vector<int> pre(n + 1, 0), suff(n + 1, 0);

    // Prefix Sum of 'N'
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + (c[i] == 'N');
    }

    // Suffix Sum of 'Y'
    for (int i = n - 1; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + (c[i] == 'Y');
    }

    int minP = INT_MAX, hour = 0;
    for (int i = 0; i <= n; i++)
    {
        int penalty = pre[i] + suff[i];

        if (penalty < minP)
        {
            minP = penalty;
            hour = i;
        }
    }
    return hour;
}

int optimized(string c)
{
    int n = c.size();
    int penalty = count(c.begin(), c.end(), 'Y');
    int minP = penalty, hour = 0;

    for (int i = 0; i < n; i++)
    {
        if (c[i] == 'Y')
            penalty--;
        else
            penalty++;

        if (penalty < minP)
        {
            minP = penalty;
            hour = i + 1;
        }
    }
    return hour;
}

int main()
{
    // Enter your Code...
    string customer;
    cin >> customer;

    // int ans = brute(customer);
    // int ans = better(customer);
    int ans = optimized(customer);
    cout << ans;
    return 0;
}