#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    // Read the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Read the character to search
    cout << "Enter a character to search: ";
    cin >> ch;

    // Count the occurrences of the character in the string
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Display the result
    cout << "The character '" << ch << "' appears " << count << " times in the string." << endl;

    return 0;
}
