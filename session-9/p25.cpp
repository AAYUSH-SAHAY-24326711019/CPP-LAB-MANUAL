#include<iostream>
using namespace std;

bool flag = true;

class complex {
private:
    double real, imag;
public:
    // Constructor
    complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Operator Overloads
    complex operator + (const complex &obj) {
        return complex(real + obj.real, imag + obj.imag);
    }

    complex operator - (const complex &obj) {
        return complex(real - obj.real, imag - obj.imag);
    }

    complex operator * (const complex &obj) {
        return complex(
            real * obj.real - imag * obj.imag,
            real * obj.imag + imag * obj.real
        );
    }

    complex operator / (const complex &obj) {
        double denominator = obj.real * obj.real + obj.imag * obj.imag;
        return complex(
            (real * obj.real + imag * obj.imag) / denominator,
            (imag * obj.real - real * obj.imag) / denominator
        );
    }

    // Display function
    void represent() {
        cout << " -> " << real;
        if (imag >= 0) cout << " + (" << imag << ")i" << endl;
        else cout << " - (" << -imag << ")i" << endl;
    }
};

void menu() {
    cout << "\nArithmetic on Complex Numbers";
    cout << "\nPress 1 to begin & 0 to exit";
    cout << "\nEntry -> ";
    
    int inp;
    cin >> inp;
    
    if (inp == 1) {
        double r1, i1, r2, i2;
        cout << "Enter real and imaginary part of first complex number: ";
        cin >> r1 >> i1;
        cout << "Enter real and imaginary part of second complex number: ";
        cin >> r2 >> i2;

        complex A(r1, i1), B(r2, i2), C;

        cout << "\nPress + , - , * , / to carry operations on Complex numbers: ";
        char op;
        cin >> op;

        switch (op) {
            case '+':
                C = A + B;
                cout << "\nResult of Addition: ";
                C.represent();
                break;
            case '-':
                C = A - B;
                cout << "\nResult of Subtraction: ";
                C.represent();
                break;
            case '*':
                C = A * B;
                cout << "\nResult of Multiplication: ";
                C.represent();
                break;
            case '/':
                if (r2 == 0 && i2 == 0) {
                    cout << "Cannot divide by zero complex number.\n";
                } else {
                    C = A / B;
                    cout << "\nResult of Division: ";
                    C.represent();
                }
                break;
            default:
                cout << "Invalid operator!\n";
        }
    } else if (inp == 0) {
        flag = false;
    } else {
        cout << "Invalid choice!\n";
    }
}

int main() {
    do {
        menu();
    } while (flag);

    cout << "\nProgram terminated.\n";
    return 0;
}
