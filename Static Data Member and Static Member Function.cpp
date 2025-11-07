#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    static int count;  

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        count++;  
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }

    static void showCount() {  
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.getData();
    s2.getData();
    s3.getData();

    cout << "\n--- Student Details ---" << endl;
    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}
