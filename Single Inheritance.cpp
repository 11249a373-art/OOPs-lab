#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void getStudentData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << "\nAge: " << age << "\nRoll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.getStudentData();
    s.display();
    return 0;
}
