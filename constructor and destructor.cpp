#include <iostream>
using namespace std;

class Sample {
private:
    int number;

public:
    Sample() {
        cout << "Constructor called!" << endl;
        number = 10;
    }

    void display() {
        cout << "Number = " << number << endl;
    }
    ~Sample() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    Sample obj;  
    obj.display();

    cout << "Exiting main function..." << endl;
    return 0;    
}
