#include<iostream>
#include<string>
using namespace std;

class Bank {
    string name;
    int acc_no;
    float balance;

public:
    void openAccount() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Opening Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited!\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << acc_no;
        cout << "\nBalance: Rs. " << balance << "\n";
    }
};

int main() {
    Bank customer;
    int ch;

    customer.openAccount();

    do {
        cout << "\nMenu:";
        cout << "\n1. Deposit Money";
        cout << "\n2. Withdraw Money";
        cout << "\n3. Display Account Details";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                customer.deposit();
                break;
            case 2:
                customer.withdraw();
                break;
            case 3:
                customer.display();
                break;
            case 0:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (ch != 0);

    return 0;
}
