#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int rollno;
    int age;
    long long phnum;
    float height;
};

void appendStudent() {
    Student s;
    ofstream file("students.txt", ios::app);

    cout << "Enter Roll No: ";
    cin >> s.rollno;
    cout << "Enter Age: ";
    cin >> s.age;
    cout << "Enter Phone Number: ";
    cin >> s.phnum;
    cout << "Enter Height: ";
    cin >> s.height;

    file << s.rollno << " " << s.age << " " << s.phnum << " " << s.height << endl;
    file.close();
    cout << "Student info added successfully!\n";
}

void displayStudents() {
    Student s;
    ifstream file("students.txt");

    cout << "\n--- Student List ---\n";
    while (file >> s.rollno >> s.age >> s.phnum >> s.height) {
        cout << "Roll No: " << s.rollno << ", Age: " << s.age
             << ", Phone: " << s.phnum << ", Height: " << s.height << endl;
    }
    file.close();
}

void modifyStudent() {
    int searchRoll;
    cout << "Enter Roll No to modify: ";
    cin >> searchRoll;

    ifstream infile("students.txt");
    ofstream temp("temp.txt");
    Student s;
    bool found = false;

    while (infile >> s.rollno >> s.age >> s.phnum >> s.height) {
        if (s.rollno == searchRoll) {
            cout << "Enter new Age: ";
            cin >> s.age;
            cout << "Enter new Phone Number: ";
            cin >> s.phnum;
            cout << "Enter new Height: ";
            cin >> s.height;
            found = true;
        }
        temp << s.rollno << " " << s.age << " " << s.phnum << " " << s.height << endl;
    }

    infile.close();
    temp.close();
    remove("students.txt");
    rename("temp.txt", "students.txt");

    if (found)
        cout << "Student info updated successfully!\n";
    else
        cout << "Student with Roll No " << searchRoll << " not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Student Info Menu ---\n";
        cout << "1. Append Student\n";
        cout << "2. Display Students\n";
        cout << "3. Modify Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: appendStudent(); break;
            case 2: displayStudents(); break;
            case 3: modifyStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 4);

    return 0;
}
