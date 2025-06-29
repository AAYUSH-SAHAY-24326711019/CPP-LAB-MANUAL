/*
* program15
 * To write data in the file after clear the data
 * need to write ios::out|ios::trunc
 * ios::out will by default truncate the file/ clear file
 * ios::trunc specify to truncate
 * ios::out|ios::trunc specify both clear data before write operation
 */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string userMessage;

void takeUserInput() {
    cout<<"\nUser Give Message :\n";
    cin.ignore();
    getline(cin,userMessage);
}

int main() {
    string file_name;
    cout<<"Enter the name of the file->"; cin>>file_name;
    try {
        if (file_name!="demo1.txt") {
            throw"File Not Found Exception";
        }
        else {
            ofstream file(file_name,ios::out|ios::trunc);
            if (file.is_open()) {
                cout<<"File found open to write.\n";
                takeUserInput();
                file<<userMessage;
            }
            else {
                cout<<"program failed!!";
            }
        }
    }
    catch (const char* msg) {
        cout<<msg;
    }
}