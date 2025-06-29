#include <iostream>
using namespace std;

int search1D(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int a[100], n, val;
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter number to search: ";
    cin >> val;

    int pos = search1D(a, n, val);
    if (pos != -1)
        cout << val << " found at position " << pos << " (indexing starts at 0).\n";
    else
        cout << val << " not found in the array.\n";

    return 0;
}
