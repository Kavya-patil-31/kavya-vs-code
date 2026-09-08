#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first word: ";
    cin >> s1;

    cout << "Enter second word: ";
    cin >> s2;

    // Convert to lowercase
    for (char &c : s1)
        c = tolower(c);

    for (char &c : s2)
        c = tolower(c);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "They are anagrams." << endl;
    else
        cout << "They are not anagrams." << endl;

    return 0;
}