#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, A;
    int n;

    cout << "Enter principal (P): ";
    cin >> P;

    cout << "Enter rate (r): ";
    cin >> r;

    cout << "Enter time in years (n): ";
    cin >> n;

    A = P * pow(1 + r / 100, n);

    cout << "Compound Amount after " << n << " years = " << A << "\n";

    return 0;
}
