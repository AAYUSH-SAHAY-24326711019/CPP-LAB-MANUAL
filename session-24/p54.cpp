#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int rollno;
    string name, branch, semester, address, email;

    void input() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter branch: ";
        getline(cin, branch);
        cout << "Enter semester: ";
        getline(cin, semester);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter email: ";
        getline(cin, email);
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
    }
};

void appendStudent() {
    ofstream file("students.txt", ios::app);
    Student s;
    s.input();
    file << s.rollno << endl << s.name << endl << s.branch << endl << s.semester << endl
         << s.address << endl << s.email << endl;
    file.close();
}

void displayAllStudents() {
    ifstream file("students.txt");
    Student s;
    while (file >> s.rollno) {
        file.ignore();
        getline(file, s.name);
        getline(file, s.branch);
        getline(file, s.semester);
        getline(file, s.address);
        getline(file, s.email);
        s.display();
        cout << "-----------------------------------" << endl;
    }
    file.close();
}

void displayCurrentStudent() {
    int rollno;
    cout << "Enter roll number of the student: ";
    cin >> rollno;
    ifstream file("students.txt");
    Student s;
    while (file >> s.rollno) {
        file.ignore();
        getline(file, s.name);
        getline(file, s.branch);
        getline(file, s.semester);
        getline(file, s.address);
        getline(file, s.email);
        if (s.rollno == rollno) {
            s.display();
            file.close();
            return;
        }
    }
    cout << "Student not found!" << endl;
    file.close();
}

void searchStudent() {
    int rollno;
    cout << "Enter roll number to search: ";
    cin >> rollno;
    ifstream file("students.txt");
    Student s;
    bool found = false;
    while (file >> s.rollno) {
        file.ignore();
        getline(file, s.name);
        getline(file, s.branch);
        getline(file, s.semester);
        getline(file, s.address);
        getline(file, s.email);
        if (s.rollno == rollno) {
            s.display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!" << endl;
    }
    file.close();
}

void deleteStudent() {
    int rollno;
    cout << "Enter roll number of the student to delete: ";
    cin >> rollno;
    ifstream file("students.txt");
    ofstream temp("temp.txt");
    Student s;
    bool found = false;
    while (file >> s.rollno) {
        file.ignore();
        getline(file, s.name);
        getline(file, s.branch);
        getline(file, s.semester);
        getline(file, s.address);
        getline(file, s.email);
        if (s.rollno != rollno) {
            temp << s.rollno << endl << s.name << endl << s.branch << endl << s.semester << endl
                 << s.address << endl << s.email << endl;
        } else {
            found = true;
        }
    }
    file.close();
    temp.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");
    if (found) {
        cout << "Student deleted successfully!" << endl;
    } else {
        cout << "Student not found!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Menu:\n";
        cout << "1. Append Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Display Current Student\n";
        cout << "4. Search Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            appendStudent();
            break;
        case 2:
            displayAllStudents();
            break;
        case 3:
            displayCurrentStudent();
            break;
        case 4:
            searchStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}
