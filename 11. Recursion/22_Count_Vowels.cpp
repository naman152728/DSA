#include <bits/stdc++.h>
using namespace std;
 
int Count_Vowels(string str, int i){
    if(i == -1)
    return 0;

    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    return 1 + Count_Vowels(str, i-1);
    else
    return Count_Vowels(str, i-1);
}

int main()
{
    //Enter your Code...
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << Count_Vowels(str, str.size()-1);
 
    return 0;
}