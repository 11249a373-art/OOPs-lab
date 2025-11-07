#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }

    void displayResult() {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "--- Integer Calculator ---" << endl;
    intCalc.displayResult();

    Calculator<float> floatCalc(5.5, 2.2);
    cout << "\n--- Float Calculator ---" << endl;
    floatCalc.displayResult();

    return 0;
}
