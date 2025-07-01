#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 2 * a;
    (ans >= b) ? cout << "METAL" : cout << "PLASTIC";

    return 0;
}