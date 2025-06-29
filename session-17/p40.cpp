#include<iostream>
#include<string>
using namespace std;

class author {
protected:
    string isbn;
    string title;
    string author_name;

public:
    void getAuthorInfo() {
        cout << "\nEnter ISBN No.: ";
        getline(cin, isbn);
        cout << "Enter Title of Book: ";
        getline(cin, title);
        cout << "Enter Author's Name: ";
        getline(cin, author_name);
    }

    void showAuthorInfo() {
        cout << "\nISBN: " << isbn;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author_name;
    }
};

class pubdetails : public author {
    string publisher_name;
    int year;
    float price;

public:
    void getPubDetails() {
        getAuthorInfo(); // Call base class input
        cout << "Enter Publisher's Name: ";
        getline(cin, publisher_name);
        cout << "Enter Year of Publication: ";
        cin >> year;
        cout << "Enter Price of Book: ";
        cin >> price;
    }

    void showPubDetails() {
        showAuthorInfo(); // Base class output
        cout << "\nPublisher: " << publisher_name;
        cout << "\nYear: " << year;
        cout << "\nPrice: Rs. " << price;
        cout << "\n---------------------------\n";
    }
};

int main() {
    pubdetails book1;
    cout << "Library Book Entry:\n";
    book1.getPubDetails();

    cout << "\nBook Information:\n";
    book1.showPubDetails();

    return 0;
}
