#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different.\n";
        cout << "Root 1 = " << root1 << "\n";
        cout << "Root 2 = " << root2 << "\n";
    } else if (d == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal.\n";
        cout << "Root = " << root1 << "\n";
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex and imaginary.\n";
        cout << "Root 1 = " << realPart << " + " << imagPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imagPart << "i\n";
    }

    return 0;
}
