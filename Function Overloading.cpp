#include <iostream>
using namespace std;

class Display {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double b) {
        cout << "Double: " << b << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Display obj;
    obj.show(10);         
    obj.show(3.14);       
    obj.show("Hello");    

    return 0;
}
