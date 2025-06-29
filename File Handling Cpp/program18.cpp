/*Program 18
 * Create a class Student of Name and id
 * Store 3 children in the demo1.txt file in append mode.
 * read the 3 children records
 */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class student {
private:int id; string name;
public:
    void writeRecord() {
        cout<<"Enter the id:";
        cin>>id;
        cout<<"\nEnter name:"; cin.ignore();
        getline(cin,name);
        ofstream file("demo1.txt",ios::app);
        if (file.is_open()) {
            file<<id<<ends<<name<<endl;
        }
        file.close();
    }

    void readRecord() {
        string line;
        cout << "Contents of demo1.txt[Students records]:\n";
        ifstream file("demo1.txt");
        if (file.is_open()){
            while (getline(file,line)) {
            cout<<line<<endl;
        }
        }
        file.close();
    }
};


int main() {
    student s[3], student_read_object;
    for (int i=0;i<3;i++) {
        s[i].writeRecord();
    }
    student_read_object.readRecord();
    return 0;
}
//
// Enter the id:1
// Enter name:Aayush
// Enter the id:2
// Enter name:Amrit
// Enter the id:3
// Enter name:Aakash

// Contents of demo1.txt[Students records]:
// 1 Aayush
// 2 Amrit
// 3 Aakash
//
// Process finished with exit code 0

