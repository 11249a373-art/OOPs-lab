#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    // Overload unary minus (-)
    void operator-() {
        x = -x;
        y = -y;
    }
};

int main() {
    Number n;
    n.getData();

    cout << "\nBefore overloading:" << endl;
    n.display();

    -n;  // Using overloaded unary operator

    cout << "\nAfter overloading unary - :" << endl;
    n.display();

    return 0;
}
