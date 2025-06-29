#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int find_nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    if (r > n)
        cout << "Invalid input. r should be less than or equal to n.\n";
    else
        cout << "nCr = " << find_nCr(n, r) << "\n";

    return 0;
}
