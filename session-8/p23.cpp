#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];
    int len;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    cout << "Reversed string: " << rev << "\n";

    return 0;
}
