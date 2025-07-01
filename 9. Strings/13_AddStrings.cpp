#include <bits/stdc++.h>
using namespace std;

string addStr(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;
    string ans = "";

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += s1[i--] - '0';

        if (j >= 0)
            sum += s2[j--] - '0';

        carry = sum / 10;
        ans += (sum % 10 + '0');
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}

int main()
{
    // Enter your Code...
    string s1, s2;
    cout << "Enter the String1: ";
    cin >> s1;

    cout << "Enter the String2: ";
    cin >> s2;

    addStr(s1, s2);

    return 0;
}