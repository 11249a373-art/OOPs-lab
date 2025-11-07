#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
protected:
    int rollNo;
public:
    void getRoll() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Result : public Student {
private:
    float marks;
public:
    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Result Details ---" << endl;
        cout << "Name: " << name << "\nRoll No: " << rollNo << "\nMarks: " << marks << endl;
    }
};

int main() {
    Result r;
    r.getName();
    r.getRoll();
    r.getMarks();
    r.display();
    return 0;
}
