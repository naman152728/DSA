// Write a program that asks the user to enter a word and determines whether the word is a palindrome or not. A palindrome is a word that reads the same backwards as forwards.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;
    int n = str.size();
    bool isPalindrome = true;
    for(int i = 0; i < n/2; i++)
    {
        if(str[i] != str[n - i -1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "It is a Palidrome" << endl;
    }
    else{
        cout << "It is not a Palindrome" << endl;

    }
    return 0;
}