#include<iostream>
#include<string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class Employee {
public:
    string name;
    string designation;
    int age;
    Date dob;

    void readData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Date of Birth (dd mm yyyy): ";
        cin >> dob.day >> dob.month >> dob.year;
        cin.ignore(); // to clear buffer for next getline
    }

    void showData() {
        cout << "\n--- Employee Details ---";
        cout << "\nName: " << name;
        cout << "\nDesignation: " << designation;
        cout << "\nAge: " << age;
        cout << "\nDate of Birth: " << dob.day << "/" << dob.month << "/" << dob.year;
        cout << "\n-------------------------\n";
    }
};

int main() {
    Employee emp;
    Employee *ptr;

    ptr = &emp;

    cout << "Enter employee details:\n";
    ptr->readData();

    cout << "\nDisplaying employee details:\n";
    ptr->showData();

    return 0;
}
