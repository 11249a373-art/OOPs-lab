#include <iostream>
using namespace std;

class Teacher {
protected:
    string subject;
public:
    void getSubject() {
        cout << "Enter subject taught: ";
        cin >> subject;
    }
};

class Staff {
protected:
    int staffId;
public:
    void getStaffId() {
        cout << "Enter staff ID: ";
        cin >> staffId;
    }
};

class Faculty : public Teacher, public Staff {
public:
    void display() {
        cout << "\n--- Faculty Information ---" << endl;
        cout << "Staff ID: " << staffId << "\nSubject: " << subject << endl;
    }
};

int main() {
    Faculty f;
    f.getStaffId();
    f.getSubject();
    f.display();
    return 0;
}
