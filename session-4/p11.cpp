#include <iostream>
#include <cmath>
using namespace std;

double calculateSeries(int x, int n) {
    double sum = 1;
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i);
    }
    return sum;
}

int main() {
    int x, n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of n: ";
    cin >> n;

    double result = calculateSeries(x, n);
    cout << "Result of series: " << result << "\n";

    return 0;
}
