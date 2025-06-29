#include<iostream>
using namespace std;

class Rational {
    int num, den;

public:
    Rational() {
        num = 0;
        den = 1;
    }

    Rational(int n, int d) {
        num = n;
        den = d;
    }

    void input() {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> den;
    }

    void display() {
        cout << num << "/" << den << endl;
    }

    Rational operator+(Rational r) {
        Rational res;
        res.num = (num * r.den) + (r.num * den);
        res.den = den * r.den;
        return res;
    }

    Rational operator-(Rational r) {
        Rational res;
        res.num = (num * r.den) - (r.num * den);
        res.den = den * r.den;
        return res;
    }

    Rational operator*(Rational r) {
        Rational res;
        res.num = num * r.num;
        res.den = den * r.den;
        return res;
    }

    Rational operator/(Rational r) {
        Rational res;
        res.num = num * r.den;
        res.den = den * r.num;
        return res;
    }
};

int main() {
    Rational r1, r2, result;
    cout << "Enter first rational number:\n";
    r1.input();

    cout << "Enter second rational number:\n";
    r2.input();

    cout << "\nAddition: ";
    result = r1 + r2;
    result.display();

    cout << "Subtraction: ";
    result = r1 - r2;
    result.display();

    cout << "Multiplication: ";
    result = r1 * r2;
    result.display();

    cout << "Division: ";
    result = r1 / r2;
    result.display();

    return 0;
}
