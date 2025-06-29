#include<iostream>
using namespace std;

class Factorial {
    int num;
    long long fact;

public:
    // Constructor
    Factorial(int n) {
        num = n;
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is " << fact << endl;
    }

    // Destructor
    ~Factorial() {
        cout << "Destructor called. Program completed.\n";
    }
};

int main() {
    int number;
    cout << "Enter a number to find factorial: ";
    cin >> number;

    Factorial f(number); // constructor runs here

    return 0;
}
