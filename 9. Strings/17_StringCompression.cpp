#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int compress(vector<char> &vec)
    {
        if (vec.empty()) return 0; // Handle empty input

        int n = vec.size();
        int read = 0, write = 0;

        while (read < n)
        {
            char currChar = vec[read];
            int count = 0;

            // Count consecutive occurrences of the current character
            while (read < n && vec[read] == currChar)
            {
                count++;
                read++;
            }

            // Write the character to the compressed vector
            vec[write++] = currChar;

            // Write the count if it is greater than 1
            if (count > 1)
            {
                for (char ch : to_string(count))
                {
                    vec[write++] = ch;
                }
            }
        }
        return write; // Return the new length of the compressed vector
    }
};

int main()
{
    Solution solution;

    int n;
    cout << "Enter the number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter the characters: ";
    for (int i = 0; i < n; i++)
    {
        cin >> chars[i];
    }

    // Compress the string
    int newLength = solution.compress(chars);

    // Output the result
    cout << "Compressed characters: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << chars[i];
    }
    cout << endl;
    cout << "New length: " << newLength << endl;

    return 0;
}