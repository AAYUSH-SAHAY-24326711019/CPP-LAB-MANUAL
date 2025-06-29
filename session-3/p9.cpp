#include <iostream>
using namespace std;

void calculate(int a, int b) {
    cout << "Addition: " << a + b << "\n";
    cout << "Subtraction: " << a - b << "\n";
    cout << "Multiplication: " << a * b << "\n";
    if (b != 0) {
        cout << "Division: " << a / b << "\n";
        cout << "Modulus: " << a % b << "\n";
    } else {
        cout << "Division and modulus not possible (div by 0)\n";
    }
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    calculate(x, y);

    return 0;
}
