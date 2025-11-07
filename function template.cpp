#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of floats: " << add(2.5f, 3.6f) << endl;
    cout << "Sum of doubles: " << add(1.1, 2.2) << endl;
    return 0;
}
