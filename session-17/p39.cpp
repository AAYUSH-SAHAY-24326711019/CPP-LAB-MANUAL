#include<iostream>
#include<string>
using namespace std;

class Marksheet {
    string name;
    string enrollment;
    int roll;
    int theory[5], practical[5], sessional[5];
    char grade;

public:
    // Constructor to take input
    Marksheet() {
        cout << "\nEnter Student's Name: ";
        getline(cin, name);
        cout << "Enter Enrollment Number: ";
        getline(cin, enrollment);
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "\nEnter Theory Marks (5 subjects):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Theory " << i + 1 << ": ";
            cin >> theory[i];
        }

        cout << "\nEnter Practical Marks (5 subjects):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Practical " << i + 1 << ": ";
            cin >> practical[i];
        }

        cout << "\nEnter Sessional Marks (5 subjects):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Sessional " << i + 1 << ": ";
            cin >> sessional[i];
        }

        calculateGrade();
    }

    void calculateGrade() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += theory[i] + practical[i] + sessional[i];
        }

        float avg = total / 15.0;

        if (avg >= 80)
            grade = 'A';
        else if (avg >= 60)
            grade = 'B';
        else if (avg >= 40)
            grade = 'C';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n---------- Marksheet ----------";
        cout << "\nName: " << name;
        cout << "\nEnrollment No: " << enrollment;
        cout << "\nRoll No: " << roll;
        cout << "\nTheory Marks: ";
        for (int i = 0; i < 5; i++) cout << theory[i] << " ";
        cout << "\nPractical Marks: ";
        for (int i = 0; i < 5; i++) cout << practical[i] << " ";
        cout << "\nSessional Marks: ";
        for (int i = 0; i < 5; i++) cout << sessional[i] << " ";
        cout << "\nGrade: " << grade;
        cout << "\n-------------------------------\n";
    }
};

int main() {
    cin.ignore(); // to flush newline before getline
    Marksheet student1;
    student1.display();
    return 0;
}
