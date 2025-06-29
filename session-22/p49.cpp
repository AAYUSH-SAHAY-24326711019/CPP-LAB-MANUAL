#include<iostream>
using namespace std;

template <class T, int size>
class Array {
    T arr[size];

public:
    void readArray() {
        cout << "Enter " << size << " elements:\n";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void showArray() {
        cout << "You entered:\n";
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array<int, 5> a1;

    a1.readArray();
    a1.showArray();

    return 0;
}
