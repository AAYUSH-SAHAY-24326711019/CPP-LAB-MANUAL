/*Program 19
 * Store the data of object in Binary/ file
 * u need fstream class to read / write data in binary
 * this will store serialisable object in file
 * we will take the dem01.dat file
 */

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class student {
public:
    int id; string name;
    void setData() {
        cout<<"id->";cin>>id;
        cout<<"\nName->";cin.ignore();
      getline(cin,name);
    }
    void display() {
        cout<<"id:"<<id<<"name :"<<name<<endl;
    }
};

int main() {
    student s;
    fstream file;
    file.open("demo1.dat",ios::binary|ios::out);
    for (int i=0;i<3;i++) {
        s.setData();
        file.write((char*)&s,sizeof(s));
    }
    file.close();

    int searchID; cout<<"Search for id : ";cin>>searchID;
    file.open("demo1.dat",ios::binary|ios::in);
    bool found=false;
    while (file.read((char*)&s,sizeof(s))) {
        if (s.id==searchID) {
            cout<<"Record Found\n";
            s.display();
            found=true;
            break;
        }
    }
    if (found==false) {
        cout<<"Records not exist!!";
    }
    return 0;
}

// output
// id->1
//
// Name->Aayush
// id->2
//
// Name->Amrit Singh
// id->3
//
// Name->Aakash Chaudhry
// Search for id :2
//  Record Found
// id:2name :Amrit Singh
//
// Process finished with exit code 0