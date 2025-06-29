#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int charCount = 0, wordCount = 1;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            charCount++;
        if (str[i] == ' ')
            wordCount++;
    }

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
    }

    cout << "Characters (excluding spaces): " << charCount << "\n";
    cout << "Words: " << wordCount << "\n";

    if (isPalindrome)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";

    return 0;
}
