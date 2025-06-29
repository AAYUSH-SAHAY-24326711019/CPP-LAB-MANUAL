#include<iostream>
#include<string>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    int rollNo;
    string name;
    string branch;
    Date dob;
    Date admissionDate;
    string city;
    string fatherOccupation;
};

void readStudent(Student &s) {
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Branch: ";
    getline(cin, s.branch);

    cout << "Enter Date of Birth (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    cout << "Enter Admission Date (DD MM YYYY): ";
    cin >> s.admissionDate.day >> s.admissionDate.month >> s.admissionDate.year;
    cin.ignore();

    cout << "Enter City: ";
    getline(cin, s.city);

    cout << "Enter Father's Occupation: ";
    getline(cin, s.fatherOccupation);
}

void displayStudent(Student s) {
    cout << "\n--- Student Info ---";
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nName: " << s.name;
    cout << "\nBranch: " << s.branch;
    cout << "\nDate of Birth: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year;
    cout << "\nAdmission Date: " << s.admissionDate.day << "/" << s.admissionDate.month << "/" << s.admissionDate.year;
    cout << "\nCity: " << s.city;
    cout << "\nFather's Occupation: " << s.fatherOccupation << "\n";
}

int main() {
    int n;
    Student students[50];

    cout << "\nEnter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        readStudent(students[i]);
    }

    cout << "\nStudents whose father is a doctor:\n";
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].fatherOccupation == "doctor" || students[i].fatherOccupation == "Doctor"||students[i].fatherOccupation == "DOCTOR") {
            displayStudent(students[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "No students found with father as a doctor.\n";
    }

    return 0;
}
