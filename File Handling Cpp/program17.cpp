/*program 17
 *Read all the contents of the file
 *
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("demo1.txt");  // Open file for reading

    if (file.is_open()) {
        string line;
        cout << "Contents of demo1.txt:\n";

        while (getline(file,line)) {
            cout<<line<<endl;
        }

        file.close();  // Close the file
    } else {
        cout << "Failed to open the file.\n";
    }

    return 0;
}

// output
// Contents of demo1.txt:
// Hello World
// ayush Sahay
