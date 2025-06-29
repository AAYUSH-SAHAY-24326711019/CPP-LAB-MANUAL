#include <iostream>
using namespace std;

bool search2D(int arr[3][3], int key) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

int main() {
    int a[3][3], n;
    cout << "Enter elements for 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cout << "Enter number to search: ";
    cin >> n;

    if (search2D(a, n))
        cout << n << " found in the array.\n";
    else
        cout << n << " not found.\n";

    return 0;
}
