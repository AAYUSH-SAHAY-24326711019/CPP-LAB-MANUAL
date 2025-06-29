#include<iostream>
using namespace std;

class Time {
    int hour;
    int minute;
    int second;

public:
    void readTime() {
        cout << "Enter time (hh mm ss): ";
        cin >> hour >> minute >> second;
    }

    void displayTime() {
        cout << hour << " hr " << minute << " min " << second << " sec\n";
    }

    friend Time addTime(Time t1, Time t2);
};

Time addTime(Time t1, Time t2) {
    Time temp;
    temp.second = t1.second + t2.second;
    temp.minute = t1.minute + t2.minute + (temp.second / 60);
    temp.second = temp.second % 60;
    temp.hour = t1.hour + t2.hour + (temp.minute / 60);
    temp.minute = temp.minute % 60;

    return temp;
}

int main() {
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.readTime();

    cout << "Enter second time:\n";
    t2.readTime();

    result = addTime(t1, t2);

    cout << "\nSum of Times: ";
    result.displayTime();

    return 0;
}
