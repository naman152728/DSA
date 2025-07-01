#include <iostream>
#include <string>
#include <algorithm> // for reverse, sort
using namespace std;

int main() {
    string s = "helloWorld";

    // 1. Length
    cout << "Length: " << s.length() << endl;

    // 2. Append
    s.append("123");
    cout << "After append: " << s << endl;

    // 3. Push and Pop
    s.push_back('X');
    cout << "After push_back: " << s << endl;

    s.pop_back();
    cout << "After pop_back: " << s << endl;

    // 4. Substring
    cout << "Substring(0,5): " << s.substr(0,5) << endl;

    // 5. Find
    cout << "Index of 'World': " << s.find("World") << endl;

    // 6. Insert
    s.insert(5, "INSERT");
    cout << "After insert: " << s << endl;

    // 7. Erase
    s.erase(5,6); // remove "INSERT"
    cout << "After erase: " << s << endl;

    // 8. Reverse
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;

    // 9. Sort
    sort(s.begin(), s.end());
    cout << "Sorted: " << s << endl;

    // 10. Compare
    string a = "abc", b = "xyz";
    cout << "Compare a and b: " << a.compare(b) << endl;  // negative since a < b

    return 0;
}
