#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << rollNo << "\t" << name << "\t" << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\n--- Student Information ---" << endl;
    cout << "RollNo\tName\tMarks" << endl;
    for (int i = 0; i < n; i++) {
        s[i].displayData();
    }

    return 0;
}
