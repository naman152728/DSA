#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    string temp;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            temp.push_back(tolower(str[i]));
        }
    }

    str = temp;
    reverse(temp.begin(), temp.end());

    return temp == str;
}

bool Optimized(string str)
{
    int st = 0, end = str.size() - 1;
    while (st <= end)
    {
        if(!isalnum(str[st]))
        {
            st++;
            continue;
        }
        if(!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if(tolower(str[st]) != tolower(str[end]))
            return false;
        
        st++;
        end--;

        return true;
    }
}

int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    // cout << isPalindrome(str) << endl;
    cout << Optimized << endl;

    return 0;
}