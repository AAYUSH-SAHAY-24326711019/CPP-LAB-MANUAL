#include<iostream>
#include<string.h>
using namespace std;

class MyString {
    char str[100];

public:
    MyString() {
        strcpy(str, "");
    }

    MyString(const char s[]) {
        strcpy(str, s);
    }

    void display() {
        cout << str << endl;
    }

    friend MyString operator+(MyString s1, MyString s2);
};

MyString operator+(MyString s1, MyString s2) {
    MyString temp;
    strcpy(temp.str, s1.str);
    strcat(temp.str, " "); // optional space
    strcat(temp.str, s2.str);
    return temp;
}

int main() {
    MyString a("Department of Computer Science and Engineering");
    MyString b("ABC Institute of Science and Technology Bhopal");

    MyString result = a + b;

    cout << "Concatenated String:\n";
    result.display();

    return 0;
}
