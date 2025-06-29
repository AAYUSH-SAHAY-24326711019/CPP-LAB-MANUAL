#include <iostream>
using namespace std;

int sumEvenSquares() {
    int n, sum = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int even = 2 * i;
        sum += even * even;
    }

    return sum;
}

int main() {
    int total = sumEvenSquares();
    cout << "Sum of squares of first n even numbers = " << total << "\n";

    return 0;
}
