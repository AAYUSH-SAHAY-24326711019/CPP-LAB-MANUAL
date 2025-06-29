#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, sum_diag = 0, sum_upper = 0, sum_lower = 0;

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                sum_diag += a[i][j];
            if (i < j)
                sum_upper += a[i][j];
            if (i > j)
                sum_lower += a[i][j];
        }
    }

    cout << "Sum of diagonal elements: " << sum_diag << "\n";
    cout << "Sum of upper triangular elements: " << sum_upper << "\n";
    cout << "Sum of lower triangular elements: " << sum_lower << "\n";

    return 0;
}
