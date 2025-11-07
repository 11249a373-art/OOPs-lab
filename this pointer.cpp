#include <iostream>
using namespace std;

class Sample {
private:
    int a;

public:
    Sample(int a) {
        this->a = a; 
    }

    void show() {
        cout << "Value of a: " << this->a << endl;
    }
};

int main() {
    Sample obj(100);
    obj.show();
    return 0;
}
