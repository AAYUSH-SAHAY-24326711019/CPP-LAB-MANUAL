#include<iostream>
using namespace std;

struct Distance {
    int meter;
    int centimeter;
};

// Function to read a distance
Distance readDistance() {
    Distance d;
    cout << "Enter distance in meters: ";
    cin >> d.meter;
    cout << "Enter distance in centimeters: ";
    cin >> d.centimeter;
    // Normalize
    if (d.centimeter >= 100) {
        d.meter += d.centimeter / 100;
        d.centimeter %= 100;
    }
    return d;
}

// Function to display a distance
void displayDistance(Distance d) {
    cout << d.meter << " meters and " << d.centimeter << " centimeters\n";
}

// Function to add two distances
Distance addDistance(Distance d1, Distance d2) {
    Distance sum;
    sum.meter = d1.meter + d2.meter;
    sum.centimeter = d1.centimeter + d2.centimeter;
    if (sum.centimeter >= 100) {
        sum.meter += sum.centimeter / 100;
        sum.centimeter %= 100;
    }
    return sum;
}

// Function to subtract distances
Distance subtractDistance(Distance d1, Distance d2) {
    Distance result;
    int total1 = d1.meter * 100 + d1.centimeter;
    int total2 = d2.meter * 100 + d2.centimeter;
    int total = total1 - total2;

    if (total < 0) total = -total;

    result.meter = total / 100;
    result.centimeter = total % 100;
    return result;
}

int main() {
    Distance d1, d2, result;
    int choice;

    cout << "\n--- Distance Operations Menu ---\n";
    cout << "Enter first distance:\n";
    d1 = readDistance();
    cout << "\nEnter second distance:\n";
    d2 = readDistance();

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Add distances\n";
        cout << "2. Subtract distances\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = addDistance(d1, d2);
                cout << "\nSum of distances: ";
                displayDistance(result);
                break;
            case 2:
                result = subtractDistance(d1, d2);
                cout << "\nDifference of distances: ";
                displayDistance(result);
                break;
            case 0:
                cout << "\nThank you!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
