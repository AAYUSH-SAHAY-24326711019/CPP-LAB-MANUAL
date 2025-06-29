#include<iostream>
#include<string>
using namespace std;

class Bill {
private:
    int meterNo;
    string customerName;
    int sessions;
    string billDate;
    string lastDate;
    string city;
    float amount;

public:
    void readData() {
        cout << "\nEnter Meter Number: ";
        cin >> meterNo;
        cin.ignore();
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        cout << "Enter Number of Sessions Consumed: ";
        cin >> sessions;
        cin.ignore();
        cout << "Enter Bill Date: ";
        getline(cin, billDate);
        cout << "Enter Last Date to Deposit: ";
        getline(cin, lastDate);
        cout << "Enter City Name: ";
        getline(cin, city);
    }

    void calculateBill() {
        int remaining = sessions;
        amount = 0;

        if (remaining <= 100) {
            amount += remaining * 0.75;
        } else {
            amount += 100 * 0.75;
            remaining -= 100;

            if (remaining <= 200) {
                amount += remaining * 1.80;
            } else {
                amount += 200 * 1.80;
                remaining -= 200;

                if (remaining <= 300) {
                    amount += remaining * 2.75;
                } else {
                    amount += 300 * 2.75;
                }
            }
        }
    }

    void printBill() {
        cout << "\n------------------------------";
        cout << "\nMeter No: " << meterNo;
        cout << "\nCustomer Name: " << customerName;
        cout << "\nCity: " << city;
        cout << "\nSessions Consumed: " << sessions;
        cout << "\nBill Date: " << billDate;
        cout << "\nLast Date to Deposit: " << lastDate;
        cout << "\nTotal Bill Amount: Rs. " << amount;
        cout << "\n------------------------------\n";
    }
};

int main() {
    Bill customers[10];
    cout << "Enter details for 10 customers:\n";

    for (int i = 0; i < 10; i++) {
        cout << "\nCustomer " << i + 1 << ":";
        customers[i].readData();
        customers[i].calculateBill();
    }

    cout << "\n\n*** Bill Details of All Customers ***\n";
    for (int i = 0; i < 10; i++) {
        customers[i].printBill();
    }

    return 0;
}
