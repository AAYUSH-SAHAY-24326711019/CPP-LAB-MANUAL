#include<iostream>
#include<string>
using namespace std;

class Address {
public:
    string city, state, country;
    int house_no, pin;

    void inputAddress() {
        cout << "Enter House No: ";
        cin >> house_no;
        cout << "Enter City: ";
        cin >> city;
        cout << "Enter State: ";
        cin >> state;
        cout << "Enter Country: ";
        cin >> country;
        cout << "Enter Pin Code: ";
        cin >> pin;
    }

    void displayAddress() {
        cout << "Address: " << house_no << ", " << city << ", " << state << ", " << country << " - " << pin << endl;
    }
};

class Faculty {
public:
    string name, dob, doj, contact, designation;
    float salary;
    Address addr;

    void createFaculty() {
        cout << "\nEnter Faculty Name: ";
        cin >> name;
        addr.inputAddress();
        cout << "Enter DOB: ";
        cin >> dob;
        cout << "Enter DOJ: ";
        cin >> doj;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Contact Number: ";
        cin >> contact;
        cout << "Enter Designation: ";
        cin >> designation;
    }

    void displayFaculty() {
        cout << "\nFaculty Name: " << name << endl;
        addr.displayAddress();
        cout << "DOB: " << dob << endl;
        cout << "DOJ: " << doj << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << contact << endl;
        cout << "Designation: " << designation << endl;
    }
};

class Student {
public:
    string name, dob, doa, branch, course;
    Address addr;

    void createStudent() {
        cout << "\nEnter Student Name: ";
        cin >> name;
        addr.inputAddress();
        cout << "Enter DOB: ";
        cin >> dob;
        cout << "Enter DOA (Admission Date): ";
        cin >> doa;
        cout << "Enter Branch: ";
        cin >> branch;
        cout << "Enter Course: ";
        cin >> course;
    }

    void displayStudent() {
        cout << "\nStudent Name: " << name << endl;
        addr.displayAddress();
        cout << "DOB: " << dob << endl;
        cout << "Admission Date: " << doa << endl;
        cout << "Branch: " << branch << endl;
        cout << "Course: " << course << endl;
    }
};

class Department {
public:
    string dname, dhead;
    int dno;

    void createDepartment() {
        cout << "\nEnter Department Name: ";
        cin >> dname;
        cout << "Enter Department No: ";
        cin >> dno;
        cout << "Enter Head of Department: ";
        cin >> dhead;
    }

    void displayDepartment() {
        cout << "\nDepartment Name: " << dname << endl;
        cout << "Department No: " << dno << endl;
        cout << "Head of Department: " << dhead << endl;
    }
};

int main() {
    Faculty f;
    Student s;
    Department d;

    cout << "\n--- Enter Faculty Details ---";
    f.createFaculty();
    
    cout << "\n--- Enter Student Details ---";
    s.createStudent();
    
    cout << "\n--- Enter Department Details ---";
    d.createDepartment();

    cout << "\n\n--- Displaying All Details ---";
    f.displayFaculty();
    s.displayStudent();
    d.displayDepartment();

    return 0;
}
