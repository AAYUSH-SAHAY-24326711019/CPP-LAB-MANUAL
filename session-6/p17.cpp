#include <iostream>
using namespace std;

bool isOrthogonal(int a[10][10], int n) {
    int at[10][10], mult[10][10];

    // Transpose
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            at[i][j] = a[j][i];

    // Multiply A × Aᵗ
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mult[i][j] = 0;
            for (int k = 0; k < n; k++)
                mult[i][j] += a[i][k] * at[k][j];
        }
    }

    // Check if result is identity matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((i == j && mult[i][j] != 1) || (i != j && mult[i][j] != 0))
                return false;

    return true;
}

int main() {
    int a[10][10], n;
    cout << "Enter order of square matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    if (isOrthogonal(a, n))
        cout << "Matrix is orthogonal.\n";
    else
        cout << "Matrix is not orthogonal.\n";

    return 0;
}
