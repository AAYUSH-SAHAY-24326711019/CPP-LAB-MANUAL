#include<iostream>
using namespace std;

template <class T>
class MyList {
    T arr[100];
    int n;

public:
    void input() {
        cout << "Enter how many elements you want to add: ";
        cin >> n;
        cout << "Enter the elements:\n";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void displaySumAndMax() {
        T sum = 0;
        T max = arr[0];
        for(int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Sum of elements = " << sum << endl;
        cout << "Greatest element = " << max << endl;
    }
};

int main() {
    MyList<int> list1;
    list1.input();
    list1.displaySumAndMax();
    return 0;
}
