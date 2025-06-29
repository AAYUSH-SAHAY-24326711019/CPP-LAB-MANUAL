#include<iostream>
#include<string>
using namespace std;

class CSE {
    int roll;
    string name;
    int semester;
    string branch;
    string institute;
    int marks[5]; // assuming 5 subjects
    char grade;

public:
    void input() {
        cout << "\nEnter Roll Number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Semester: ";
        cin >> semester;
        cin.ignore();
        cout << "Enter Branch: ";
        getline(cin, branch);
        cout << "Enter Institute Name: ";
        getline(cin, institute);
        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }

        calculateGrade();
    }

    void calculateGrade() {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        float avg = total / 5.0;

        if (avg >= 75)
            grade = 'A';
        else if (avg >= 60)
            grade = 'B';
        else if (avg >= 50)
            grade = 'C';
        else
            grade = 'F';
    }

    void display() {
        if (grade == 'A') {
            cout << "\n-----------------------------";
            cout << "\nResult Sheet (Honors)";
            cout << "\nRoll Number: " << roll;
            cout << "\nName: " << name;
            cout << "\nSemester: " << semester;
            cout << "\nBranch: " << branch;
            cout << "\nInstitute: " << institute;
            cout << "\nMarks: ";
            for (int i = 0; i < 5; i++)
                cout << marks[i] << " ";
            cout << "\nGrade: " << grade;
            cout << "\n-----------------------------\n";
        }
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    CSE student[10]; // max 10 students for simplicity

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        student[i].input();
    }

    cout << "\n\n--- Students with Honors ---\n";
    for (int i = 0; i < n; i++) {
        student[i].display();
    }

    return 0;
}
