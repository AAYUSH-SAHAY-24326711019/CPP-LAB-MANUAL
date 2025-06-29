#include<iostream>
#include<fstream>
using namespace std;

class Employee {
    char name[50];
    char designation[50];
    float salary;
    char phone[15];

public:
    void getData() {
        cout << "\nEnter Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter Designation: ";
        cin.getline(designation, 50);
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Phone Number: ";
        cin >> phone;
    }

    void showData() {
        cout << "\nName: " << name;
        cout << "\nDesignation: " << designation;
        cout << "\nSalary: " << salary;
        cout << "\nPhone: " << phone << endl;
    }
};

int main() {
    Employee emp;
    ofstream fout("employee.txt", ios::binary);

    emp.getData();
    fout.write((char*)&emp, sizeof(emp));
    fout.close();

    ifstream fin("employee.txt", ios::binary);
    fin.read((char*)&emp, sizeof(emp));
    emp.showData();
    fin.close();

    return 0;
}
