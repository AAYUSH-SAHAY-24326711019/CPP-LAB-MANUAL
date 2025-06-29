#include<iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[50];
    int size;

public:
    void readArray() {
        cout << "Enter size of the array: ";
        cin >> size;
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void findMinMax() {
        int smallest = arr[0];
        int largest = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] < smallest)
                smallest = arr[i];
            if (arr[i] > largest)
                largest = arr[i];
        }

        cout << "\nSmallest Element: " << smallest;
        cout << "\nLargest Element: " << largest << "\n";
    }
};

int main() {
    ArrayOperations A;
    A.readArray();
    A.findMinMax();
    return 0;
}
