#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], sum[10][10], trans[10][10];
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    // Sum of matrices
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "Sum of the matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << sum[i][j] << " ";
        cout << "\n";
    }

    // Transpose of sum matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = sum[i][j];

    cout << "Transpose of the sum matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << trans[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
