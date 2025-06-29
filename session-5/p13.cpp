#include <iostream>
using namespace std;

int greatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    int max = greatest(x, y, z);
    cout << "Greatest number is: " << max << "\n";

    return 0;
}
