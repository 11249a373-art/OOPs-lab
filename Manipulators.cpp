#include <iostream>
#include <iomanip>   // Required for manipulators
using namespace std;

int main() {
    int a = 10, b = 200, c = 3000;
    double pi = 3.1415926535;

    cout << "Demonstrating Manipulators in C++\n\n";

    cout << "Using setw():" << endl;
    cout << setw(5) << a << endl;
    cout << setw(5) << b << endl;
    cout << setw(5) << c << endl;

    cout << "\nUsing setfill('*') with setw(6):" << endl;
    cout << setfill('*') << setw(6) << a << endl;
    cout << setfill('*') << setw(6) << b << endl;
    cout << setfill('*') << setw(6) << c << endl;

    cout << "\nUsing fixed and setprecision(3):" << endl;
    cout << fixed << setprecision(3) << pi << endl;

    cout << "\nUsing showpoint and scientific:" << endl;
    cout << showpoint << scientific << pi << endl;

    cout << "\nUsing left and right justification:" << endl;
    cout << left << setw(10) << "Left" << right << setw(10) << "Right" << endl;

    return 0;
}
