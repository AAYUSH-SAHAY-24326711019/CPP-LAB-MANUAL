#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert (0-based index): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\n";
    return 0;
}
