/*
 * Program 16 to add the data at the end of the file.
 * we need to use the ios::app mode of file write
 * demo1.txt file has Hello World already
 * we will write a new String at the End of the file
 */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

string userMsg;
void setMsgInFile() {
    cout<<"User Give input:"; cin.ignore(); getline(cin,userMsg);
}
int main() {
    string fileName="demo1.txt";
    ofstream file(fileName,ios::app);
    if (file.is_open()) {
        setMsgInFile();
        file<<endl<<userMsg;
        file.close();
    }
    else {
        cout<<"file failed to create";
    }
    return 0;
}
/*
 * Output:
 * User Give input:Aayush Sahay
 * inside of the file demo1.cpp
* Hello World
ayush Sahay
 */