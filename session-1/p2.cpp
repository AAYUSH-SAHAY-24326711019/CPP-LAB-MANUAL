#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int num, largest;

    cout << "Enter number 1: ";
    cin >> largest;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > largest) {
            largest = num;
        }
    }

    cout << "The largest number is: " << largest << "\n";
    return 0;
}
