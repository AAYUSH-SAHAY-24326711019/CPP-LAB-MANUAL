#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    char str[100];

public:
    void setString(char s[]) {
        strcpy(str, s);
    }

    void display() {
        cout << str << endl;
    }

    MyString operator+(MyString s2) {
        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, " "); // add space between strings
        strcat(temp.str, s2.str);
        return temp;
    }
};

int main() {
    MyString s1, s2, result;

    char a[] = "Prof Rajesh K Shukla";
    char b[] = "Computer Science & Engineering";

    s1.setString(a);
    s2.setString(b);

    result = s1 + s2;

    cout << "Concatenated String:\n";
    result.display();

    return 0;
}
