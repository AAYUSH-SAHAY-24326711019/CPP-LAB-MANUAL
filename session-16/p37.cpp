#include<iostream>
using namespace std;

class Fibonacci {
    int terms;

public:
    // Parameterized Constructor
    Fibonacci(int n) {
        terms = n;
        int a = 0, b = 1, next;

        cout << "\nFibonacci Series:\n";
        for (int i = 1; i <= terms; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        cout << endl;
    }

    // Destructor
    ~Fibonacci() {
        cout << "Fibonacci series printed successfully!\n";
    }
};

int main() {
    int n;
    cout << "Enter number of terms for Fibonacci series: ";
    cin >> n;

    Fibonacci fib(n); // constructor is called here

    return 0;
}
