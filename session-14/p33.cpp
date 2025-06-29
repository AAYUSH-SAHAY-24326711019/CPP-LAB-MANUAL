#include<iostream>
using namespace std;

class Distance {
    int meter;
    int cm;

public:
    void read() {
        cout << "Enter meter: ";
        cin >> meter;
        cout << "Enter centimeter: ";
        cin >> cm;
    }

    void display() {
        cout << meter << " meter " << cm << " cm\n";
    }

    friend Distance add(Distance, Distance);
    friend Distance subtract(Distance, Distance);
};

Distance add(Distance d1, Distance d2) {
    Distance temp;
    temp.cm = d1.cm + d2.cm;
    temp.meter = d1.meter + d2.meter + (temp.cm / 100);
    temp.cm = temp.cm % 100;
    return temp;
}

Distance subtract(Distance d1, Distance d2) {
    Distance temp;
    int d1_total_cm = d1.meter * 100 + d1.cm;
    int d2_total_cm = d2.meter * 100 + d2.cm;
    int diff = d1_total_cm - d2_total_cm;

    if (diff < 0) diff = -diff;

    temp.meter = diff / 100;
    temp.cm = diff % 100;
    return temp;
}

int main() {
    Distance d1, d2, result;
    int choice;

    cout << "Enter first distance:\n";
    d1.read();
    cout << "Enter second distance:\n";
    d2.read();

    do {
        cout << "\nMenu";
        cout << "\n1. Add Distances";
        cout << "\n2. Subtract Distances";
        cout << "\n3. Display First Distance";
        cout << "\n4. Display Second Distance";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = add(d1, d2);
                cout << "Result of Addition: ";
                result.display();
                break;
            case 2:
                result = subtract(d1, d2);
                cout << "Result of Subtraction: ";
                result.display();
                break;
            case 3:
                cout << "First Distance: ";
                d1.display();
                break;
            case 4:
                cout << "Second Distance: ";
                d2.display();
                break;
            case 0:
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!";
        }

    } while (choice != 0);

    return 0;
}
