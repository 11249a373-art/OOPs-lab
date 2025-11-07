#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string title, author;
    float price;

public:
    void getData();      
    void displayData();  
};

// Function definitions outside class
void Book::getData() {
    cout << "Enter Book ID: ";
    cin >> bookId;
    cout << "Enter Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter Price: ";
    cin >> price;
}

void Book::displayData() {
    cout << "\n--- Book Details ---" << endl;
    cout << "Book ID: " << bookId << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}

int main() {
    Book b;
    b.getData();
    b.displayData();
    return 0;
}
