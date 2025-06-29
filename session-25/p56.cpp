#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowelCount = 0;

    // Read the string
    cout << "Enter a string: ";
    getline(cin, str);

    // Count the vowels in the string
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);  // Convert character to lowercase for uniform comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Display the result
    cout << "The number of vowels in the string is: " << vowelCount << endl;

    return 0;
}
