#include <iostream>
using namespace std;

class MyString {
private:
    string str;

public:
    void getData() {
        cout << "Enter string: ";
        cin >> str;
    }

    void display() {
        cout << str;
    }

    MyString operator+(MyString s) {
        MyString temp;
        temp.str = str + s.str; 
        return temp;
    }
};

int main() {
    MyString s1, s2, s3;

    cout << "Enter first string: ";
    s1.getData();
    cout << "Enter second string: ";
    s2.getData();

    s3 = s1 + s2;  

    cout << "\nConcatenated String: ";
    s3.display();

    return 0;
}
