#include <iostream>
using namespace std;

class Sample {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void add(Sample s);
};

void add(Sample s) {
    cout << "Sum = " << s.a + s.b << endl;
}

int main() {
    Sample s;
    s.getData();
    add(s);  
    return 0;
}
