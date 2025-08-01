#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial not possible for negative numbers.\n";
    else
        cout << "Factorial of " << num << " is " << factorial(num) << "\n";

    return 0;
}
