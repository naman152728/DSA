#include <bits/stdc++.h>
using namespace std;

string sortVowel(string str) {
    vector<char> vowels;

    // Extract vowels and replace them with placeholders in the original string
    for (char& ch : str) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels.push_back(ch);
            ch = '#'; // Replace vowel with placeholder
        }
    }

    // Sort the vowels
    sort(vowels.begin(), vowels.end());

    // Reinsert the sorted vowels into the original string
    int vowelIndex = 0;
    for (char& ch : str) {
        if (ch == '#') {
            ch = vowels[vowelIndex++];
        }
    }

    return str;
}


int main()
{
    // Enter your Code...
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    cout << sortVowel(str);

    return 0;
}
