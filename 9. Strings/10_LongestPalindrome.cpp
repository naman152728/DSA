#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string str) {
    vector<int> lower(26, 0), upper(26, 0); // Frequency arrays for lowercase and uppercase letters

    // Count the frequency of each character
    for (char ch : str) {
        if (ch >= 'a' && ch <= 'z') {
            lower[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            upper[ch - 'A']++;
        }
    }

    int sum = 0, count = 0;

    // Process lowercase letters
    for (int i = 0; i < 26; i++) {
        if (lower[i] % 2 == 0) {
            sum += lower[i]; // Add even counts directly
        } else {
            sum += lower[i] - 1; // Add the largest even part
            count = 1;           // Mark that we have at least one odd count
        }
    }

    // Process uppercase letters
    for (int i = 0; i < 26; i++) {
        if (upper[i] % 2 == 0) {
            sum += upper[i]; // Add even counts directly
        } else {
            sum += upper[i] - 1; // Add the largest even part
            count = 1;           // Mark that we have at least one odd count
        }
    }

    // If there is at least one odd count, we can place one odd character in the middle
    return sum + count;
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    cout << longestPalindrome(str) << endl;

    return 0;
}