#include<iostream>
#include<string>
using namespace std;

int accountCounter = 1000; // starting account number
const int MAX_CUSTOMERS = 100;

class Customer {
protected:
    string name;
    int age;
    string address;
public:
    void inputCustomerDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);
    }

    void displayCustomerDetails() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nAddress: " << address;
    }
};

class BankCustomer : public Customer {
private:
    int accountNumber;
    int pin;
    double balance;
public:
    void registerUser() {
        inputCustomerDetails();
        accountNumber = ++accountCounter;

        cout << "Set your 4-digit PIN: ";
        cin >> pin;

        cout << "Enter initial deposit amount: ";
        cin >> balance;

        cout << "\nRegistration successful!";
        cout << "\nYour Account Number is: " << accountNumber << "\n";
    }

    int getAccountNumber() {
        return accountNumber;
    }

    bool authenticate(int accNo, int enteredPin) {
        return accNo == accountNumber && enteredPin == pin;
    }

    void depositMoney() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully. Current Balance: " << balance << "\n";
    }

    void withdrawMoney() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance - amount < 100) {
            cout << "Cannot withdraw. Minimum balance of 100 must be maintained.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Current Balance: " << balance << "\n";
        }
    }

    void showDetails() {
        displayCustomerDetails();
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nCurrent Balance: " << balance << "\n";
    }
};

int main() {
    BankCustomer customers[MAX_CUSTOMERS];
    int totalCustomers = 0;
    int choice;

    do {
        cout << "\n--- Bank Menu ---";
        cout << "\n1. Register New Customer";
        cout << "\n2. Bank Operations";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (totalCustomers < MAX_CUSTOMERS) {
                customers[totalCustomers].registerUser();
                totalCustomers++;
            } else {
                cout << "Maximum number of customers reached.\n";
            }
        } else if (choice == 2) {
            int accNo, enteredPin;
            cout << "Enter Account Number: ";
            cin >> accNo;
            cout << "Enter PIN: ";
            cin >> enteredPin;

            bool found = false;
            for (int i = 0; i < totalCustomers; i++) {
                if (customers[i].authenticate(accNo, enteredPin)) {
                    found = true;
                    int op;
                    do {
                        cout << "\n--- Bank Operations ---";
                        cout << "\n1. Deposit Money";
                        cout << "\n2. Withdraw Money";
                        cout << "\n3. Show Customer Details";
                        cout << "\n0. Back to Main Menu";
                        cout << "\nEnter your choice: ";
                        cin >> op;
                        switch (op) {
                            case 1: customers[i].depositMoney(); break;
                            case 2: customers[i].withdrawMoney(); break;
                            case 3: customers[i].showDetails(); break;
                            case 0: cout << "Returning to main menu.\n"; break;
                            default: cout << "Invalid choice.\n";
                        }
                    } while (op != 0);
                    break;
                }
            }

            if (!found) {
                cout << "Invalid account number or PIN!\n";
            }

        } else if (choice == 0) {
            cout << "Exiting the program.\n";
        } else {
            cout << "Invalid option. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
