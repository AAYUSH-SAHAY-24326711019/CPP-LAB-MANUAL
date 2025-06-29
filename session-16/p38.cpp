#include<iostream>
#include<string>
using namespace std;

class Reservation {
    int train_no;
    string train_name;
    string source;
    string destination;
    string journey_date;
    float total_amount;
    string category;
    string passenger_name;
    int passenger_age;

public:
    void getDetails() {
        cout << "\nEnter Train Number: ";
        cin >> train_no;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, train_name);

        cout << "Enter Source Station: ";
        getline(cin, source);

        cout << "Enter Destination Station: ";
        getline(cin, destination);

        cout << "Enter Journey Date (dd/mm/yyyy): ";
        getline(cin, journey_date);

        cout << "Enter Category (Sleeper / AC-I / AC-2 / AC-3): ";
        getline(cin, category);

        cout << "Enter Passenger's Name: ";
        getline(cin, passenger_name);

        cout << "Enter Passenger's Age: ";
        cin >> passenger_age;

        cout << "Enter Total Amount: ";
        cin >> total_amount;
    }

    void showDetails() {
        cout << "\n===== Ticket Details =====";
        cout << "\nTrain Number: " << train_no;
        cout << "\nTrain Name: " << train_name;
        cout << "\nFrom: " << source;
        cout << "\nTo: " << destination;
        cout << "\nDate of Journey: " << journey_date;
        cout << "\nCategory: " << category;
        cout << "\nPassenger Name: " << passenger_name;
        cout << "\nAge: " << passenger_age;
        cout << "\nTotal Amount: Rs. " << total_amount;
        cout << "\n==========================\n";
    }
};

int main() {
    Reservation r;

    cout << "Train Reservation System\n";
    r.getDetails();
    r.showDetails();

    return 0;
}
