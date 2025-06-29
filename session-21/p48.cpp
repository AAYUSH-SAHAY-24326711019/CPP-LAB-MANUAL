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

    void checkList() {
        T sum = 0;
        T min = arr[0];
        for(int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Sum of elements = " << sum << endl;
        cout << "Smallest element = " << min << endl;

        T x;
        cout << "Enter number to check its occurrence: ";
        cin >> x;

        int count = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] == x) {
                count++;
            }
        }

        if(count > 0) {
            cout << x << " is present " << count << " time(s) in the list.\n";
        } else {
            cout << x << " is not present in the list.\n";
        }
    }
};

int main() {
    MyList<int> list2;
    list2.input();
    list2.checkList();
    return 0;
}
