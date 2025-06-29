#include<iostream>
#include<fstream>
using namespace std;

class Student {
private:
    char name[50];
    int roll;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin.ignore(); // to clear input buffer
        cin.getline(name, 50);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter age: ";
        cin >> age;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;

    ofstream fout("student.txt", ios::binary);
    if (!fout) {
        cout << "File could not be created.\n";
        return 0;
    }

    s.getData();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("student.txt", ios::binary);
    if (!fin) {
        cout << "File could not be opened.\n";
        return 0;
    }

    Student s2;
    fin.read((char*)&s2, sizeof(s2));
    cout << "\nStudent info read from file:\n";
    s2.showData();
    fin.close();

    return 0;
}
