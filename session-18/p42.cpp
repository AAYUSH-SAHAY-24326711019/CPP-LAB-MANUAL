#include<iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapValues(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void swapValues(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 1.5, q = 3.2;
    char ch1 = 'A', ch2 = 'B';

    cout << "\nBefore Swapping:";
    cout << "\nIntegers: x=" << x << " y=" << y;
    cout << "\nFloats: p=" << p << " q=" << q;
    cout << "\nChars: ch1=" << ch1 << " ch2=" << ch2;

    swapValues(x, y);
    swapValues(p, q);
    swapValues(ch1, ch2);

    cout << "\n\nAfter Swapping:";
    cout << "\nIntegers: x=" << x << " y=" << y;
    cout << "\nFloats: p=" << p << " q=" << q;
    cout << "\nChars: ch1=" << ch1 << " ch2=" << ch2;

    return 0;
}
