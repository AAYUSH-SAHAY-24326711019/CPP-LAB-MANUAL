#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digits = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";

    return 0;
}
