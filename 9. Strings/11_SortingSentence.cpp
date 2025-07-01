#include <bits/stdc++.h>
using namespace std;

string sortSentence(string str)
{
    string word;
    vector<string> v(10);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            v[str[i]-'0'] = word + " ";
            word = "";
            i++;
        }
        else
        {
            word+= str[i];
        }
    }

    string ans;
    for(string x: v)
    {
        ans+= x;
    }
    ans.pop_back();
    cout << ans;

}

int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    sortSentence(str);

    return 0;
}