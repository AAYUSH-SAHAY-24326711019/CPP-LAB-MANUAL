/*
 *Program 13
 *How to create a file in cPP
 */
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("demo1.txt");
    if (file.is_open()) {
        cout<<"sucessfully made"<<endl;
        file.close();
    }
    else {
        cout<<"failed to create file:dem01.txt";
    }
    return 0;
}